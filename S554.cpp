

#include <vector>
#include <algorithm>                
#include <iostream>
#include <unordered_map>
#include "main.h"

using namespace std;


namespace S554 {

class Solution {
public: 
	int leastBricks(vector<vector<int>>& wall) {
		unordered_map<int, int> umap;
		for (auto& aw : wall) {
			int start = aw[0];
			for (int j = 0; j < aw.size(); j++) {
				umap[start]++;
				start += aw[j];
			}
		}
		int mx = 0;
		for (auto itr : umap) {
			mx = max(mx, itr.second);
		}
		return wall.size() - mx;
	}
};

int main(int argc, char *argv[]) {
    cout << "Question 554 is solved" << endl;

    Solution so; 

    return 0;
}
__attribute__((constructor)) static void init() { 
    solution_vec[554] = main;
} 
};


