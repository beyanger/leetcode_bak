#include "S476.h"
#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;


namespace S476 {

class Solution {
public:
    int findComplement(int num) {
        int mask = 0x7fffffff;
        for (int i = 30; i >= 0; i--) {
            if ((num & (1<<i)) == 0) {
                mask &= ~(1<<i);
            } else break;
        }
        return mask - num;
    }
};

class SolutionB {
public:
    int findComplement(int num) {
        unsigned mask = ~0;
        while (num & mask) mask <<= 1;
        return ~mask & ~num;
    }
};


int main(int argc, char *argv[]) {

    if (argc < 2) {
        cout << "usage: ./main num\n";
        return 0;
    }

    Solution so;
    int res = so.findComplement(atoi(argv[1]));
    cout << "Number Complement is: " << res << endl;
	
	return 0;
}



};
