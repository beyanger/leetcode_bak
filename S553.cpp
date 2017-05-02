

#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;


namespace S553 {

class Solution {
public: 

	string optimalDivision(vector<int>& nums) {
		if (nums.size() == 1) return to_string(nums[0]);
		if (nums.size() == 2) return to_string(nums[0]) + "/" + to_string(nums[1]);
		string res = to_string(nums[0]) + "/(" + to_string(nums[1]);
		for (int i = 2; i < nums.size(); i++)
			res += ("/" + to_string(nums[i]));
		return res + ")";

	}

};

int main(int argc, char *argv[]) {
    cout << "Question 553 is solved" << endl;

    Solution so; 

    return 0;
}
__attribute__((constructor)) static void init() { 
    solution_vec[553] = main;
} 
};


