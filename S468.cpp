

#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;

namespace S468 {

class Solution {
public: 

	string validIPAddress(string IP) {




		return "Neither";
	}
};

int main(int argc, char *argv[]) {
    cout << "Question 468 is created" << endl;

    Solution so; 

    return 0;
}

__attribute__((constructor)) static void init() { 
	solution_vec[468] = main;
}

};

