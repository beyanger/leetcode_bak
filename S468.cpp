

#include "S468.h"
#include <vector>
#include <algorithm>                
#include <iostream>

using namespace std;

namespace S468 {

class Solution {
public: 

	string validIPAddress(string IP) {
		int ipv4[4] = {0};

		int n = sscanf(IP.c_str(), "%d,%d,%d,%d", ipv4, ipv4+1, ipv4+2, ipv4+3);






		return "Neither";
	}
};

int main(int argc, char *argv[]) {
    cout << "Question 468 is created" << endl;

    Solution so; 

    return 0;
}

};

