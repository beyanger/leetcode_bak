

#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;

namespace S521 {

class Solution {
public: 
	int findLUSlength(string a, string b) {
		return a==b ? -1 : max(a.length(), b.length());
	}
};

int main(int argc, char *argv[]) {
    cout << "Question 521 is solved" << endl;

    Solution so; 

    return 0;
}

__attribute__((constructor)) static void init() { 
	solution_vec[521] = main;
}
};

