
#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;

namespace S231 {

class Solution {
public: 
	bool isPowerOfTwo(int n) {
		return n > 0 && !(n & (n-1));
	}
};

int main(int argc, char *argv[]) {
    cout << "Question 231 is created" << endl;

    Solution so; 

    return 0;
}
__attribute__((constructor)) static void init() { 
    solution_vec[231] = main;
} 
};

