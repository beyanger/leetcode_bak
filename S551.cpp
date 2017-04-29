

#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;


namespace S551 {

class Solution {
public: 
	bool checkRecord(string s) {
		int a = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'A') a++;
			else if (s[i] == 'L' && i > 1 && s[i-1]=='L' && s[i-2]=='L') return false;
		}
		return a < 2;
	}
};

int main(int argc, char *argv[]) {
    cout << "Question 551 is solved" << endl;

    Solution so; 

    return 0;
}
__attribute__((constructor)) static void init() { 
    solution_vec[551] = main;
} 
};


