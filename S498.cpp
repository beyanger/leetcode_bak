
#include <vector>
#include <iostream>


using namespace std;

namespace S498 {
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {
        if (matrix.empty()) return {};
    
        int height = matrix.size();
        int width = matrix[0].size();
        int end = width * height;
        int x = 0, y = 0,  direct = 0;
    
        vector<int> ret(end);
    
        for (int i = 0; i < end; i++) {
            ret[i] = matrix[y][x];
            int nx = x + (direct ? -1 : 1);
            int ny = y + (direct ? 1 : -1);

            if (nx==-1 || nx==width || ny==-1 || ny==height) {
                (direct = !direct) ? (nx==width ? y++ : x++)  : (ny == height ? x++ : y++) ;
            } else {
                x = nx;
                y = ny;
            }
        }
        return ret;
    }
};


int main(int argc, char *argv[]) {
	if (argc != 2) {
		printf("usage : %s demission\n", argv[0]);
		return 0;
	}

	int demi = atoi(argv[1]);

	vector<vector<int>> xx;

	for (int i = 0; i < demi; i++) {
		vector<int> x;
		for (int j = 0; j < demi; j++) {
			x.push_back(i*demi + j + 1);
		}
		xx.push_back(x);
	}


	S498::Solution so;
	auto x  = so.findDiagonalOrder(xx);

	for (auto n : x) cout << n << " " ;

	cout << endl;

	return 0;
}

};
