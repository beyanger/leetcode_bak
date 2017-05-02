

#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;


namespace S344 {

class Solution {
public: 
	string reverseString(string s) {
		for (int i=0,j=s.size()-1; i < j; i++, j--) {
			char c = s[i];
			s[i] = s[j];
			s[j] = c;
		}
		return s;
	}

};

int main(int argc, char *argv[]) {
    cout << "Question 344 is solved" << endl;

    Solution so; 

    return 0;
}
__attribute__((constructor)) static void init() { 
    solution_vec[344] = main;
} 
};


