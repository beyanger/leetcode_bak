

#include "S542.h"
#include <vector>
#include <algorithm>                
#include <limits.h>
#include <iostream>

using namespace std;

namespace S542 {

class Solution {
    void helper(vector<vector<int>>&m, int h, int w, int i, int j, int d) {
        if (i > 0 && m[i-1][j] && d < m[i-1][j]) {
            m[i-1][j] = d;
            helper(m, h, w, i-1, j, d+1);
        }
        if (i < (h-1) && m[i+1][j] && d < m[i+1][j]) {
            m[i+1][j] = d;
            helper(m, h, w, i+1, j, d+1);
        }
        if (j > 0 && m[i][j-1] && d < m[i][j-1]) {
            m[i][j-1] = d;
            helper(m, h, w, i, j-1, d+1);
        }
        if (j < (w-1) && m[i][j+1] && d < m[i][j+1]) {
           m[i][j+1] = d;
           helper(m, h, w, i, j+1, d+1);
        }
    }
public: 
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return matrix;
        int h = matrix.size();
        int w = matrix[0].size();

        for (int i = 0; i < h; i++) 
            for (int j=0; j < w; j++) 
                if (matrix[i][j] == 1) 
					matrix[i][j] = INT_MAX; 

        for (int i = 0; i < h; i++) 
            for (int j=0; j < w; j++) 
                if (matrix[i][j] == 0) 
                    helper(matrix, h, w, i, j, 1);
        return matrix;
    }
};



class SolutionB {

	bool helper(vector<vector<int>>& m, int h, int w, int cv) {
		bool res = false;
		int cr = cv+1;

		for (int i = 0; i < h; i++) {
			for (int j=0; j < w; j++) {
				if (m[i][j] != cv)  continue;

				if (i > 0 && m[i-1][j] && m[i-1][j] > cr) {
					res = true;
					m[i-1][j] = cr;
				}

				if (i <h-1 && m[i+1][j] && m[i+1][j] > cr) {
					res = true;
					m[i+1][j] = cr;
				}

				if (j > 0 && m[i][j-1] && m[i][j-1] > cr) {
					res = true;
					m[i][j-1] = cr;
				}

				if (j <w-1 && m[i][j+1] && m[i][j+1] > cr) {
					res = true;
					m[i][j+1] = cr;
				}
			}
		}
		return res;
	}
	
public: 
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        if (matrix.empty() || matrix[0].empty()) return matrix;
        int h = matrix.size();
        int w = matrix[0].size();

        for (int i = 0; i < h; i++) 
            for (int j=0; j < w; j++) 
                if (matrix[i][j] == 1) 
					matrix[i][j] = INT_MAX; 
		int cv = 0;

		while (helper(matrix, h, w, cv++)) ; 

        return matrix;
    }
};




int main(int argc, char *argv[]) {
    cout << "Question 542 is solved" << endl;

    Solution so; 

    return 0;
}

};

