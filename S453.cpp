#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

namespace S453 {

class Solution {
public:
    int minMoves(vector<int>& nums) {
        
        int ln = nums.size();
        if (ln < 2) return 0;

        int mi = nums[0], res = 0;

        for (int i = 1; i < ln; i++)
            mi = min(mi, nums[i]);

        for (int i = 0; i < ln; i++)
            res += (nums[i] - mi);

        return res;

    }

};



int main(int argc, char *argv[]) {
    if (argc < 2) {
        cout << "usage: ./main num1 num2 ...\n";
        return 0;
    }

    std::vector<int> v;

    for (int i = 1; i < argc; i++) {
        v.push_back(atoi(argv[i]));
    }

	
    Solution so;


    cout << so.minMoves(v) << endl;

	return 0;
}



};

