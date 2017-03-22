#include "S2.h"
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;


namespace S2 {

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};


class Solution {

	ListNode *helper(ListNode *l1, ListNode *l2, int carry) {
		if (l1) {
			if (l2) {
				int v = l1->val + l2->val + carry;
				auto ret = new ListNode(v % 10);
				ret->next = helper(l1->next, l2->next, v/10);
				return ret;
			} else {
				int v = l1->val + carry;
				auto ret = new ListNode(v % 10);
				ret->next = helper(l1->next, NULL, v/10);
				return ret;
			}
		} else if (l2) {
			int v = l2->val + carry;
			auto ret = new ListNode(v % 10);
			ret->next = helper(NULL, l2->next, v/10);
			return ret;
		} else if (carry) {
			return new ListNode(carry);
		}
		return NULL;	
	}

public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		return helper(l1, l2, 0);
	}
};


class SolutionB {
private:
	int carry = 0;

public:
	ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
		if (l1 || l2 || carry) {
			int v1, v2;
			ListNode *n1, *n2;

			l1 ? (v1=l1->val, n1=l1->next) : (v1=0, n1=NULL);
			l2 ? (v2=l2->val, n2=l2->next) : (v2=0, n2=NULL);

			int v = v1 + v2 + carry;
			carry = v / 10;
			auto ret = new ListNode(v % 10);
			ret->next = addTwoNumbers(n1, n2);

			return ret;

		}
		return NULL;	
	}
};


int main(int argc, char *argv[]) {

	ListNode n10(1);
	ListNode n11(8);
	ListNode n20(0);
	n10.next = &n11;

	S2::SolutionB so;

	S2::ListNode * newList = so.addTwoNumbers(&n10, &n20);

	while (newList) {
		cout << newList->val << " ";
		auto bak = newList;
		newList = newList->next;
		delete bak;
	}

	cout << endl;
	
	return 0;
}



};
