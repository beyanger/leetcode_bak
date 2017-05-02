

#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;


namespace S226 {

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public: 

	TreeNode* invertTree(TreeNode* root) {
		if (root) {
			invertTree(root->left);
			invertTree(root->right);
			swap(root->left, root->right);
		}
		return root;
	}
};

int main(int argc, char *argv[]) {
    cout << "Question 226 is solved" << endl;

    Solution so; 

    return 0;
}
__attribute__((constructor)) static void init() { 
    solution_vec[226] = main;
} 
};


