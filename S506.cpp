#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;


namespace S506 {


class Solution {
    struct node {
        int _p, _v;
        node(int p, int v) : _p(p), _v(v) {}
        bool operator<(const node & o) const {
            return _v < o._v;
        }
    };

public:
    vector<string> findRelativeRanks(vector<int>& nums) {

        int len = nums.size();
        std::vector<string> res(len);
        if (len == 0) return res;

        std::vector<node> pv(len, node(0, 0));

        for (int i = 0; i < len; i++) {
            pv[i] = node(i, nums[i]);
        }

        sort(pv.begin(), pv.end());

        if (len > 0) res[pv[len-1]._p] = "Gold Medal";
        if (len > 1) res[pv[len-2]._p] = "Silver Medal";
        if (len > 2) res[pv[len-3]._p] = "Bronze Medal";

        for (int i = len-4, curr = 4; i >= 0; i--, curr++) {
            res[pv[i]._p] = to_string(curr);
        }

        return res;
    }
};

int main(int argc, char *argv[]) {

    if (argc < 2) {
        cout << "usage: ./main score1 score2 ... \n";
        return 0; 
    }

    std::vector<int> scores;

    for (int i = 1; i < argc; i++) {
        scores.push_back(atoi(argv[i]));
    }

    Solution so;

    std::vector<string> res = so.findRelativeRanks(scores);

    cout << "result is: ";
    for (auto & str : res) {
        cout << str << " ";
    }
    cout << "\n";

	
	return 0;
}



};
