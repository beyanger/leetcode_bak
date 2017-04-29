#include <vector>
#include <algorithm>
#include <iostream>
#include "main.h"

using namespace std;

namespace S501 {


struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};



class Solution {

    void preorder(TreeNode *root, vector<int>& res, int& last, int& cl, int& cm) {
        if (!root) return;
        if (root->left) preorder(root->left, res, last, cl, cm);

        if (cl == 0) {
            cl = cm = 1;
            res = {root->val};
        } else {
            if (last == root->val) cl++;
            else cl = 1;

            if (cm > cl) {
                cm = cl;
                res = {root->val};
            } else if (cm == cl && root->val != res.back()) {
                res.push_back(root->val);
            }
        }
        last = root->val;
        if (root->right) preorder(root->right, res, last, cl, cm);
    
    }

public: 
    vector<int> findMode(TreeNode* root) {
        vector<int> res;
        if (!root) return res;
        int last, cl=0, cm;

        preorder(root, res, last, cl, cm);

        return res;    
    }
};

int main(int argc, char *argv[]) {

    cout << "Question 501 is solved" << endl;
    Solution so;

    return 0;
}
__attribute__((constructor)) static void init() { 
	solution_vec[501] = main;
}

};
