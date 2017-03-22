#include "S220.h"
#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

namespace S220 {

class Solution {

struct node {
	int p, v;
	bool operator<(const node &o) const { return v < o.v;}
};

public: 
	bool containsNearbyAlmostDuplicate(vector<int>& nums, int k, int t) {
		int len = nums.size();

		vector<node> x(len);
		for (int i = 0; i < len; i++) {
			x[i].p = i;
			x[i].v = nums[i];
		}

		sort(x.begin(), x.end());

		for (int i=0, j = 1;  i < j && j < len;) {
			long long vdiff =(long long)x[j].v - x[i].v;
			int pdiff = abs(x[j].p - x[i].p);

			if (vdiff <= t) {
				if (pdiff <= k) return true;
				else j ==len-1 ? i++ : j++;
			} else {
				i++;
				j += (i == j);
			}
		}
			        
		return false;
	}

};

int main(int argc, char *argv[]) {

	if (argc <  5) {
		cout << "usage: ./main n1 n2 ... k t\n";
		return 0;
	}
	vector<int> nums;
	int i = 1;
	for (; i < argc-2; i++) {
		nums.push_back(atoi(argv[i]));
	}

	int k = atoi(argv[i++]);
	int t = atoi(argv[i++]);


    Solution so;

	bool res = so.containsNearbyAlmostDuplicate(nums, k, t);
	cout << "result:" << res << endl;

    return 0;
}

};
