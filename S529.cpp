

#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;

namespace S529 {

class Solution {
public: 

	vector<vector<char>> updateBoard(vector<vector<char>>& b, vector<int>& c) {
		int y = c[0], x = c[1];

		if (b[y][x] == 'M') {
			b[y][x] = 'X';
			return b;
		}





		          
		return b;
	}
};

int main(int argc, char *argv[]) {
    cout << "Question 529 is created" << endl;

    Solution so; 

    return 0;
}

__attribute__((constructor)) static void init() { 
	solution_vec[529] = main;
}
};

