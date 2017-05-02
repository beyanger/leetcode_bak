

#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;


namespace S100 {

	struct TreeNode {
		int val;
		TreeNode *left;
		TreeNode *right;
		TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	};

class Solution {
public: 

	bool isSameTree(TreeNode *p, TreeNode *q) {
		if (!p || !q) return p == q;
		return p->val==q->val && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
	}

};

int main(int argc, char *argv[]) {
    cout << "Question 100 is created" << endl;

    Solution so; 

    return 0;
}
__attribute__((constructor)) static void init() { 
    solution_vec[100] = main;
} 
};


