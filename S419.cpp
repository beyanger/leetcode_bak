

#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;


namespace S419 {

class Solution {
public: 

	int countBattleships(vector<vector<char>>& board) {
		int res =0;
		int n = board.size();
		int m = board.front().size();
		for (int i=0; i < n; ++i) 
			for (int j=0; j < m; ++j) 
				if (board[i][j]=='X') 
					if (!(j-1 >=0 && board[i][j-1]=='X') && !(i-1>=0 && board[i-1][j]=='X'))
						res++;
		return res;
	}

};

int main(int argc, char *argv[]) {
    cout << "Question 419 is solved" << endl;

    Solution so; 

    return 0;
}
__attribute__((constructor)) static void init() { 
    solution_vec[419] = main;
} 
};


