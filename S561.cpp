

#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;


namespace S561 {

class Solution {
public: 
	int arrayPairSum(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		int res = 0;
		for (int i = 0; i < nums.size(); i += 2) 
			res += nums[i];
		return res;

	}
};

int main(int argc, char *argv[]) {
    cout << "Question 561 is solved" << endl;

    Solution so; 

    return 0;
}
__attribute__((constructor)) static void init() { 
    solution_vec[561] = main;
} 
};


