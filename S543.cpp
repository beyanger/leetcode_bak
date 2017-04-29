

#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;

namespace S543 {

struct TreeNode {
	int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
private:
	int helper(TreeNode *root, int& res) {
		if (!root) return 0;
		int lh = helper(root->left, res);
		int rh = helper(root->right, res);
		res = max(res, lh+rh);
		return max(lh, rh) + 1;
	}

public: 
	int diameterOfBinaryTree(TreeNode* root) {
		int res = 0;
		helper(root, res);
		return res;
	}
};



int main(int argc, char *argv[]) {
    cout << "Question 543 is solved, please check source code!!!" << endl;

    Solution so; 

    return 0;
}

__attribute__((constructor)) static void init() { 
	solution_vec[543] = main;
}
};

