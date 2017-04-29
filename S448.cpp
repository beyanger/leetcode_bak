

#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;

namespace S448 {

class Solution {
public: 
	 vector<int> findDisappearedNumbers(vector<int>& nums) {
		vector<int> res;
		int len = nums.size();

		for (int i = 0; i < len; i++) {
			int pos = abs(nums[i]) - 1;
			nums[pos] = nums[pos] > 0 ? -nums[pos] : nums[pos];
		}	

		for (int i = 0; i < len; i++) {
			if (nums[i] > 0) res.push_back(i+1);
		}
				 
		 return res;
	}
};

int main(int argc, char *argv[]) {
    cout << "Question 448 is sloved..." << endl;

    Solution so; 

    return 0;
}

__attribute__((constructor)) static void init() { 
	solution_vec[448] = main;
}
};

