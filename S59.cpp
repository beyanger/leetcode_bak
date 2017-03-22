#include "S59.h"

#include <stdio.h>
#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>


using namespace std;


namespace S59 {
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        static int dx[] = {1, 0, -1, 0};
        static int dy[] = {0, 1, 0, -1};
        static int nt[] = {1, 2, 3, 0};
        int x=0, y=0, d=0;

        vector<vector<int>> v(n, vector<int>(n, 0));
        for (int i=1; i<=n*n; ++i) {
            v[y][x] = i;
            int ny = y + dy[d];
            int nx = x + dx[d];
            if (ny==-1 || ny==n || nx==-1 || nx==n || v[ny][nx]!=0)
                d = nt[d];
            y += dy[d];
            x += dx[d];
        }
        return v;
    }
};


int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("usage : %s demassion\n", argv[0]);
		return 0;
	}

	int seq = atoi(argv[1]);
	S59::Solution so;
	auto ma = so.generateMatrix(seq);

	for (auto & line : ma) {
		for (auto & el : line) {
			printf("%2d ", el);
		}
		cout << endl;
	}

	return 0;
}
};
