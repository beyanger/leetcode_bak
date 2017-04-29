#include <vector>
#include <iostream>
#include <algorithm>
#include "main.h"

using namespace std;

namespace S461 {

class Solution {
public:
    int hammingDistance(int x, int y) {

        int xxor = x ^ y;
        int ret = 0;
        while (xxor) {
            xxor &= (xxor-1);
            ret++;
        }
        return ret; 
    }
};



int main(int argc, char *argv[]) {

    if (argc < 3) {
        cout << "usage: ./main x y\n";
        return 0;
    }

    Solution so;
	int hammingDistance = so.hammingDistance(atoi(argv[1]), atoi(argv[2]));

    cout << "hammingDistance is :" << hammingDistance << endl;
    
	return 0;
}

__attribute__((constructor)) static void init() { 
	solution_vec[461] = main;
}

};
