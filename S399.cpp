

#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;

namespace S399 {

class Solution {
public: 

};

int main(int argc, char *argv[]) {
    cout << "Question 399 is created" << endl;

    Solution so; 

    return 0;
}

__attribute__((constructor)) static void init() { 
	solution_vec[399] = main;
}

};

