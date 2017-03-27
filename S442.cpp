

#include "S442.h"
#include <vector>
#include <algorithm>                
#include <iostream>

using namespace std;

namespace S442 {

class Solution {
public: 
	vector<int> findDuplicates(vector<int>& nums) {
		vector<int> res;
		int len = nums.size();

		for (int i = 0; i < len;) {
			int pos = nums[i] - 1;

			if (pos == i) {
				i++;
			} else {
				if (nums[pos] != pos+1) {
					int t = nums[pos];
					nums[pos] = nums[i];
					nums[i] = t;
				} else {
					res.push_back(++i);
				}
			}

		}

		return res;
	}

};

int main(int argc, char *argv[]) {
	vector<int> x = {4,3,2,7,8,2,3,1};
    Solution so; 

	so.findDuplicates(x);

    return 0;
}

};

