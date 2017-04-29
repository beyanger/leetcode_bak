
#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;

namespace S513 {
    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    };
class Solution {

    void helper(TreeNode *root, int cl, int& level, int& res) {

        if (!root->left && !root->right && cl>level) {
            level = cl;
            res = root->val;
            return;
        }

        if (root->left) helper(root->left, cl+1, level, res);
        if (root->right) helper(root->right, cl+1, level, res);
    }
public: 

    int findBottomLeftValue(TreeNode* root) {
        int level = -1, res = root->val;
        helper(root, 0, level, res);
        return res; 
    }
};

int main(int argc, char *argv[]) {
    cout << "Question 513 is solved, please check source code..." << endl;

    Solution so; 

    return 0;
}

__attribute__((constructor)) static void init() { 
	solution_vec[513] = main;
}
};

