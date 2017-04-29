#include <vector>
#include <algorithm>
#include <iostream>
#include "main.h"

using namespace std;

namespace S485 {

class Solution {
public: 
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int len = nums.size();
        int max_len = 0;
        int curr_len = 0;
        for (int i = 0; i < len; i++) {
            if (nums[i] == 1) {
                curr_len++;
            } else {
                max_len = max(max_len, curr_len);
                curr_len = 0;
            }
        }
        return max(max_len, curr_len);
    }

};

int main(int argc, char *argv[]) {

    if (argc < 2) {
        cout << "usage: ./main 1 0 1 1 ...\n";
        return 0;
    }

    vector<int> v;
    
    for (int i = 1; i < argc; i++) {
        v.push_back(!!atoi(argv[i]));
    }

    Solution so;

    auto res = so.findMaxConsecutiveOnes(v);
    cout << "result :" << res << endl;

    return 0;
}

__attribute__((constructor)) static void init() { 
	solution_vec[485] = main;
}
};
