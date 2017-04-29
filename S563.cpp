
#include <vector>
#include <algorithm>                
#include <iostream>

#include "main.h"

using namespace std;

namespace S563 {

	struct TreeNode {
		int val;
		TreeNode *left;
		TreeNode *right;
		TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	};

class Solution {


	int helper(TreeNode *root, int& res) {
		int l = root->left ? helper(root->left, res) : 0;
		int r = root->right ? helper(root->right, res) : 0;
		res += abs(l - r);
		return l + r + root->val;
	}

public:
	int findTilt(TreeNode* root) {
		int res = 0;
		if (root) helper(root, res);
		return res;
	}
};

int main(int argc, char *argv[]) {
    cout << "Question 563 is solved" << endl;
    Solution so; 
    return 0;
}


__attribute__((constructor)) static void init() { 
	solution_vec[563] = main;
}

};
 

