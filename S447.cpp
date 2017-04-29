

#include <vector>
#include <algorithm>                
#include <unordered_map>
#include <iostream>
#include "main.h"

using namespace std;

namespace S447 {

class Solution {

public: 
	int numberOfBoomerangs(vector<pair<int, int>>& points) {
		int res = 0;
		unordered_map<int, int> group;
		for (auto & p : points) {
			group.clear();
			for (auto &q : points) {
				int dy = (p.second-q.second);
				int dx = (p.first-q.first);
				group[dx*dx+dy*dy]++;
			}

			for (auto& g: group) 
				res += (g.second - 1) * g.second;
		}
		return res;
	}
};


int main(int argc, char *argv[]) {
    cout << "Question 447 is created" << endl;

    Solution so; 

	vector<pair<int, int>> points = {
		make_pair(0, 0), 
		make_pair(1, 0),
		make_pair(-1, 0),
		make_pair(0, 1),
		make_pair(0, -1)
	};

	cout << so.numberOfBoomerangs(points) << endl;



    return 0;
}

__attribute__((constructor)) static void init() { 
	solution_vec[447] = main;
}
};

