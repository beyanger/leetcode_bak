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
	bool operator<(const node &o) const { return v < o.v; } 
    };

public:
    vector<int> twoSum(vector<int>& nums, int target) {
	int nsize = nums.size();
	vector<node> pvn(nsize);

	for (int i = 0; i < nsize; i++) {
		pvn[i].p = i;
		pvn[i].v = nums[i];

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
