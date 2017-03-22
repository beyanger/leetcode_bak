#include "S1.h"
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;


namespace S1 {
class Solution {
private:
    struct node {
        int p,v;
	node(int _v, int _p) : v(_v), p(_p) {}
	bool operator<(const node &o) const { return v < o.v; } 
    };

public:
    vector<int> twoSum(vector<int>& nums, int target) {
	int nsize = nums.size();
	vector<node> pvn(nsize, node(0, 0));

	for (int i = 0; i < nsize; i++) {
	    pvn[i] = node(nums[i], i);	
	}
	
	sort(pvn.begin(), pvn.end());

	for (int i = 0, j=nsize-1; i < j;) {
		int t = pvn[i].v + pvn[j].v;
		
		if (t > target) {
			j--;
		} else if (t < target) {
			i++;
		} else {
			return {pvn[i].p, pvn[j].p};
		}
	}

        
	return {};
    }
};
        



int main(int argc, char *argv[]) {



	S1::Solution so;
	
	vector<int> nums = {3, 2, 4};
	auto x = so.twoSum(nums, 7);
	if (x.size() == 2)
		cout << x[0] << " " << x[1] << endl;
	
	return 0;

}



};
