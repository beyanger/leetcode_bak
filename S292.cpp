

#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;


namespace S292 {

class Solution {
public: 
	bool canWinNim(int n) {
		return n & 3;
	}

};

int main(int argc, char *argv[]) {
    cout << "Question 292 is solved" << endl;

    Solution so; 

    return 0;
}
__attribute__((constructor)) static void init() { 
    solution_vec[292] = main;
} 
};


