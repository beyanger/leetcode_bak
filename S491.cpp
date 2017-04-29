

#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;

namespace S491 {

class Solution {
public: 
	vector<vector<int>> findSubsequences(vector<int>& nums) {
		vector<vector<int>> res = {{nums[0]}};



		return  res;
	}
};

int main(int argc, char *argv[]) {
    cout << "Question 491 is created" << endl;

    Solution so; 

	vector<int> xx = {4,6,7,7};

	so.findSubsequences(xx);

    return 0;
}

__attribute__((constructor)) static void init() { 
	solution_vec[491] = main;
}
};

