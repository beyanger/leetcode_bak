#include "S4.h"

#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <deque>
#include <vector>
#include <list>


using namespace std;

/*
 * Hard
 * */


namespace S4 {
class Solution {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int lm = nums1.size();
		int ln = nums2.size();
		int len  = lm + ln;

		vector<int> nn(len);

		int m=0, n=0;

		for (int i = 0; i < len; i++) {
			if (m < lm && n < ln) {
				if (nums1[m] < nums2[n]) {
					nn[i] = nums1[m++];
				} else {
					nn[i] = nums2[n++];
				}
			} else if (m < lm) {
				nn[i] = nums1[m++];
			} else if (n < ln) {
				nn[i] = nums2[n++];
			}
		}

		if (len %2 ) {
			return (double)nn[len/2];
		}
		return (double)(nn[len/2]+nn[len/2-1]) / 2;	
	}
};



int main(int argc, char *argv[]) {
	vector<int> xx = {1, 2, 3, 4, 5, 6, 7};

	S4::Solution so;

	cout << so.findMedianSortedArrays(xx, xx) << endl;




	return 0;
}
};
