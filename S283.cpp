
#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;

namespace S283 {

class Solution {
public: 


	void moveZeroes(vector<int>& nums) {
		int len = nums.size();
		int i = 0;
		for (int j  = 0; j < len; j++)
			if (nums[j] != 0) nums[i++] = nums[j];
		for (; i < len; i++) nums[i] = 0;
	}

};

int main(int argc, char *argv[]) {
    cout << "Question 283 is created" << endl;

    Solution so; 

    return 0;
}
__attribute__((constructor)) static void init() { 
    solution_vec[283] = main;
} 
};

