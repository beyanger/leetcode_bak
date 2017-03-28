

#include "S537.h"
#include <vector>
#include <algorithm>                
#include <iostream>

using namespace std;

namespace S537 {

class Solution {
public: 
	string complexNumberMultiply(string a, string b) {
		int ar, ai, br, bi; 
		sscanf(a.c_str(),"%d+%di", &ar, &ai);
		sscanf(b.c_str(), "%d+%di", &br, &bi);
		return to_string(ar*br-ai*bi) + "+" + to_string(ar*bi+br*ai) + "i";
	}
};

/*
 *	1+2i, 2+-2i 0+0i
 *
 * */

int main(int argc, char *argv[]) {
    cout << "Question 537 is solved" << endl;

    Solution so; 

    return 0;
}

};

