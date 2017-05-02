
#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;

namespace S108 {

	struct TreeNode {
		int val;
		TreeNode *left;
		TreeNode *right;
		TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	};


class Solution {
	TreeNode *bst(vector<int>& nums, int i, int j)
	{
		if (i >= j) return NULL;
		int x = (i + j) / 2;
		TreeNode *root = new TreeNode(nums[x]);
		root->left = bst(nums, i, x);
		root->right = bst(nums, x+1, j);
		return root;
	}

public: 
	TreeNode* sortedArrayToBST(vector<int>& nums) {
		if (nums.size() < 1) return NULL;
		int x = nums.size() / 2;
		TreeNode *root = new TreeNode(nums[x]);
		root->left = bst(nums, 0, x);
		root->right = bst(nums, x+1, nums.size());

		return root;
	}
};

int main(int argc, char *argv[]) {
    cout << "Question 108 is created" << endl;

    Solution so; 

    return 0;
}
__attribute__((constructor)) static void init() { 
    solution_vec[108] = main;
} 
};

