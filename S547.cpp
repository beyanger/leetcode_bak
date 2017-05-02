
#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;

namespace S547 {

class Solution {

	void helper(int line, vector<vector<int>>& M, vector<bool>& visited) {
		visited[line] = true;
		for (int i = 0; i < M.size(); i++) {
			if (i != line && M[line][i] && !visited[i]) helper(i, M, visited);
		}
	}

public:
	int findCircleNum(vector<vector<int>>& M) {
		int n = M.size();
		vector<bool> visited(n, false);
		int groups = 0;
		for (int i = 0; i < visited.size(); i++) {
			if (!visited[i]) {
				helper(i, M, visited);

				groups++;
			}
		}
		return groups;
	}

};

int main(int argc, char *argv[]) {
    cout << "Question 547 is created" << endl;

    Solution so; 

    return 0;
}
__attribute__((constructor)) static void init() { 
    solution_vec[547] = main;
} 
};

