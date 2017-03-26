

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
        int n = nums.size() + 1;

        for (int i = 0; i < len; i++) {
            int pos = nums[i]%n -1;
            nums[pos] += n;
        }

        for (int i = 0; i < len; i++) 
            if (nums[i] > 2*n) res.push_back(i+1);
        return res;
    }

};

int main(int argc, char *argv[]) {
    cout << "Question 442 is solved" << endl;

    Solution so; 

    return 0;
}

};

