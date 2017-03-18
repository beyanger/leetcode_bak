#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;


namespace S477 {

class Solution {

public:
    int totalHammingDistance(vector<int>& nums) {
      
        int len = nums.size();
        int res = 0;

        for (int i = 0;i < 32; i++) {
            int bits = 0;
            for (int j = 0; j < len; j++) {
                bits += (nums[j] >> i) & 1;
            }
            res += bits * (len - bits);
        }

        return res;
    }
};


int main(int argc, char *argv[]) {
    if (argc < 3) {
        cout << "usage: ./main x1 x2 ....\n";
        return 0;
    }

    std::vector<int> v;
    for (int i = 1; i < argc; i++) {
        v.push_back(atoi(argv[i]));
    }

    Solution so;
    auto res = so.totalHammingDistance(v);

    cout << "totalHammingDistance is : " << res << endl;
    
	return 0;
}



};
