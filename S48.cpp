
#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;

namespace S48 {

class Solution {
public: 

	void rotate(vector<vector<int>>& m) {
		vector<vector<int>> n(m);
		int yn = m.size();
		int xn = m[0].size();

		for (int i = 0; i < yn; i++) {
			for (int j = 0; j < xn; j++) {
				int x = i;
				int y = yn-1 - j;
				m[y][x] = n[i][j];
			}
		}
	}

};

int main(int argc, char *argv[]) {
    cout << "Question 48 is created" << endl;

    Solution so; 

    return 0;
}
__attribute__((constructor)) static void init() { 
    solution_vec[48] = main;
} 
};

