

#include "S473.h"
#include <vector>
#include <algorithm>                
#include <iostream>

using namespace std;

namespace S473 {


/* Runtime timeout*/
class Solution {

	bool helper(vector<int>& nums, int pos, int dp[4]) {
		if (nums.size() == pos) return !dp[0] && !dp[1] && !dp[2] && !dp[3];

		int n = nums[pos];
		for (int i = 0; i < 4; i++) {
			if (n > dp[i]) continue;
			dp[i] -= n;
			if (helper(nums, pos+1, dp)) 
				return true;
			dp[i] += n;
		}
		return false;	
	}

public: 

	bool makesquare(vector<int>& nums) {

		if (nums.size() < 4) return false;

		int sum = accumulate(nums.begin(), nums.end(), 0);
		if (sum % 4) return false;

		int target = sum / 4;
		int dp[4] = {target, target, target, target};
		
		sort(nums.begin(), nums.end(), [](const int& l , const int & r) {return l>r;});

		return helper(nums, 0, dp);
	}

};

int main(int argc, char *argv[]) {
    cout << "Question 473 is solved" << endl;

    Solution so; 

    return 0;
}

};

