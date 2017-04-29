
#include <vector>
#include "main.h"


using namespace std;


namespace S540 {
class Solution {
	public:
		int singleNonDuplicate(vector<int>& n) {
			if (n[0] != n[1]) return n[0];
			int len = n.size()-2;
			for (int i = 2; i < len; i++) 
				if (n[i-1] != n[i] && n[i]!=n[i+1]) 
					return n[i];        
			return n.back();
		}   
};      



int main(int argc, char *argv[]) {
	Solution so;

	return 0;
}
__attribute__((constructor)) static void init() { 
	solution_vec[540] = main;
}
};
