

#include "S508.h"
#include <vector>
#include <algorithm>                
#include <iostream>
#include <map>

using namespace std;

namespace S508 {

    struct TreeNode {
        int val;
        TreeNode *left;
        TreeNode *right;
        TreeNode(int x) : val(x), left(NULL), right(NULL) {}
    };


class Solution {
    int helper(TreeNode *root, map<int, int>& xx) {
        if (!root) return 0;
        int t = helper(root->left, xx) + helper(root->right, xx) + root->val;
        xx[t]++;
        return t;
    }

public: 
        vector<int> findFrequentTreeSum(TreeNode* root) {
            vector<int> res;
            map<int, int> xx;
            helper(root, xx);
            int freq = 0;
            for (auto itr=xx.begin(); itr!=xx.end(); itr++) {
                if (itr->second > freq) {
                    res = {itr->first};
                    freq = itr->second;
                } else if (itr->second == freq) {
                    res.push_back(itr->first);
                }
            }
            return res;        
        }

};

int main(int argc, char *argv[]) {
    cout << "Question 508 is solved" << endl;

    Solution so; 

    return 0;
}

};

