

#include "S538.h"
#include <vector>
#include <algorithm>                
#include <iostream>

using namespace std;

namespace S538 {

    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    };

class Solution {
    void helper(TreeNode *root, int& sum) {
        if (root->right) helper(root->right, sum);
        root->val = (sum += root->val);
        if (root->left) helper(root->left, sum);
    }

public:
    TreeNode* convertBST(TreeNode* root) {
		if (!root) return root;

        int sum = 0;
        helper(root, sum);
        return root;
    }   
};

int main(int argc, char *argv[]) {
    cout << "Question 538 is solved" << endl;

    Solution so; 

    return 0;
}

};

