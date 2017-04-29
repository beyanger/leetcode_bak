

#include <vector>
#include <algorithm>                
#include <iostream>
#include <unordered_map>
#include "main.h"

using namespace std;

namespace S149 {

	struct Point {
		int x;
		int y;
		Point() : x(0), y(0) {}
		Point(int a, int b) : x(a), y(b) {}
	};


class Solution {

	inline bool checkOnLine(const Point& a, const Point& b, const Point& c) {

		if (a.x==b.x || b.x==c.x) {
			return a.x==c.x;
		}
		return (a.y-b.y)*(c.x-b.x) == (c.y-b.y)*(a.x-b.x);

	}

public: 
	int maxPoints(vector<Point>& points) {
		int len = points.size();
		if (len < 3) return len;

		vector<vector<Point *>> lines = {{&points[0], &points[1]}};

		for (int i = 2; i < len; i++) { 
			Point& p = points[i];

			int llen = lines.size();
			int j = 0;
			for (; j < llen; j++) {
				if (checkOnLine(p, *lines[j][0], *lines[j][1])) {
					lines[j].push_back(&p); break;
				}
			}
			vector<vector<Point *>> newLines;
			for (int m = 0; m < llen; m++) {
				if (m == j) continue;
				vector<Point *>& line = lines[m];

				for (int n = 0; n < line.size(); n++) {
					newLines.push_back({&p, line[n]});
				}
			}
			lines.insert(lines.end(), newLines.begin(), newLines.end());
		
		}

		int res = 0;
		for (auto & line : lines)
			res = max(res, (int)line.size());
		
		return res;
	}	


};

int main(int argc, char *argv[]) {
    cout << "Question 149 is created" << endl;

    Solution so; 

    return 0;
}

__attribute__((constructor)) static void init() { 
	solution_vec[149] = main;
}
};

