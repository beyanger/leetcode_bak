
#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;


namespace S566 {

class Solution {
public: 
	vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
		if (nums.empty() || nums[0].empty()) return nums;
		int h = nums.size(), w = nums[0].size();
		if (h*w != c*r) return nums;
		int t = h*w;
		vector<vector<int>> res(r, vector<int>(c, 0));
		for (int i = 0; i < t; i++)
			res[i/c][i%c] = nums[i/w][i%w];

		return res;
	}
};

int main(int argc, char *argv[]) {
    cout << "Question 566 is solved" << endl;

    Solution so; 

    return 0;
}
__attribute__((constructor)) static void init() { 
    solution_vec[566] = main;
} 
};


