#include <vector>
#include <iostream>
#include <algorithm>
#include "main.h"

using namespace std;

namespace S445 {
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
 
class Solution {

    ListNode *helper(ListNode *l1, ListNode *l2, int& carry) {
        if (!l1 || !l2) return NULL;

        if (l1 && !l1->next && l2 && !l2->next) {
            int v = l1->val + l2->val;
            carry = v / 10;
            return new ListNode(v % 10);
        } 

        auto x = new ListNode(0);
        x->next = helper(l1->next, l2->next, carry);

        int v = l1->val + l2->val + carry;
        carry = v / 10;
        x->val = v % 10;
        return x;
    }


public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int len1 = 0, len2 = 0;
        ListNode *p1 = l1, *p2 = l2;

        while (p1) {
            len1++;
            p1 = p1->next;
        }

        while (p2) {
            len2++;
            p2 = p2->next;
        }

        p1 = l1, p2 = l2;

        ListNode *free_list = 0;
        int free_len = 0;

        if (len1 > len2) {
            for (int i = len1-len2; i >= 0; i--) {
                auto node = new ListNode(0);
                free_len++;
                node->next = p2;
                p2 = node;
            }
            free_list = p2;
        } else {
            for (int i = len2-len2; i>= 0; i--) {
                auto node = new ListNode(0);
                free_len++;
                node->next = p1;
                p1 = node;
            }
            free_list = p1;
        }


        int carry = 0;

        ListNode *res = helper(p1, p2, carry);

        while (free_len > 0) {
            free_len--;
            auto bak = free_list;
            free_list = free_list->next;
            delete bak;
        }

        if (carry) {
            auto ret = new ListNode(carry);
            ret->next = res;
            return ret;
        }
        return res;

    }
};



int main(int argc, char *argv[]) {
    ListNode a1(7), a2(2), a3(4), a4(3);
    a1.next = &a2, a2.next = &a3, a3.next = &a4;

    ListNode b1(5), b2(5), b3(4);
    b1.next = &b2, b2.next = &b3;

    Solution so;

    so.addTwoNumbers(&a1, &b1);


	return 0;
}


__attribute__((constructor)) static void init() { 
	solution_vec[445] = main;
}

};
