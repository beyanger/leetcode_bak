#include <vector>
#include <algorithm>
#include <iostream>
#include "main.h"

using namespace std;

namespace S450 {

  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution {
public: 

};

int main(int argc, char *argv[]) {
    cout << "Question 450 is created" << endl;

    Solution so;

    return 0;
}

__attribute__((constructor)) static void init() { 
	solution_vec[450] = main;
}
};
