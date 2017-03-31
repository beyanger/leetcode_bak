

#include "S494.h"
#include <vector>
#include <algorithm>                
#include <iostream>

using namespace std;

namespace S494 {

class Solution {

	int helper(vector<int>& nums,int i, int target) {
		if (i == nums.size()) return target == 0;
		return helper(nums, i+1, target-nums[i]) 
			+ helper(nums, i+1, target+nums[i]);
	}

public: 
	int findTargetSumWays(vector<int>& nums, int S) {
		return helper(nums,  0, S);
	}
};

int main(int argc, char *argv[]) {
    cout << "Question 494 is solved" << endl;

	vector<int> nums = {1,1,1,1,1};

    Solution so; 


    return 0;
}

};

