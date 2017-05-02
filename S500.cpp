

#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;


namespace S500 {

class Solution {
	bool check(string& str) {
		static int map[] = {
			0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
			0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
			0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
			0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
			0, 2, 3, 3, 2, 1, 2, 2, 2, 1, 2, 2, 2, 3, 3, 1, 
			1, 1, 1, 2, 1, 1, 3, 1, 3, 1, 3, 0, 0, 0, 0, 0, 
			0, 2, 3, 3, 2, 1, 2, 2, 2, 1, 2, 2, 2, 3, 3, 1, 
			1, 1, 1, 2, 1, 1, 3, 1, 3, 1, 3, 0, 0, 0, 0, 0, 
			0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
			0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
			0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
			0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
			0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
			0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
			0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
			0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
		};
		int line = map[str[0]];
		for (char c : str) 
			if (line != map[c]) return false;
		return true;

	}
public:
	vector<string> findWords(vector<string>& words) {
		vector<string> res;
		for (string & str : words) {
			if (check(str)) res.push_back(str);
		}
		return res;
	}

};

int main(int argc, char *argv[]) {
    cout << "Question 500 is solved" << endl;

    Solution so; 

    return 0;
}
__attribute__((constructor)) static void init() { 
    solution_vec[500] = main;
} 
};


