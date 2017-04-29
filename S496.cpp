#include <vector>
#include <iostream>
#include <algorithm>
#include "main.h"


using namespace std;


namespace S496 {

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        std::vector<int>  res;

        int i = 0, start = 0;

        int len1 = findNums.size();
        int len2 = nums.size();
        for (int i = 0; i < len1; i++) {

            int j = start;
            int isExit = false;

            for (; j < len2; j++) {
                if (nums[j] > findNums[i]) {
                    res.push_back(nums[j]);
                    isExit = true;
                    start = j+1;
                    break;
                }
            }

            if (!isExit) res.push_back(-1);

        }
        return res;
    }
};



int main(int argc, char *argv[]) {

    std::vector<int> findNums = {1, 3};
	std::vector<int>  nums = {1, 3, 4, 2};

    Solution so;

    auto res = so.nextGreaterElement(findNums, nums);

    for (auto n : res) {
        cout << n << " ";
    }

    cout << endl;

	return 0;
}

__attribute__((constructor)) static void init() { 
	solution_vec[496] = main;
}

};
