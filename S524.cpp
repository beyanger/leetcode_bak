

#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;

namespace S524 {

class Solution {

public: 

	string findLongestWord(string s, vector<string>& d) {
		
		sort(d.begin(), d.end(), [](const string&s1, const string& s2){
				int l1 = s1.size(), l2 = s2.size();
				if (l1 != l2) return l1 > l2;
				for (int i = 0; i < l1; i++) {
				if (s1[i] != s2[i]) return s1[i] < s2[i];	
				}
				return false;
			});

		int ss = s.size();

		int len = d.size();
		for (int i = 0; i < len; i++) {
			string & ds = d[i];
			int dd = ds.size();

			int m = 0, n = 0;

			while (m < dd && n < ss) {
				m += (ds[m] == s[n]);
				n++;
			}

			if (m == dd) return ds;
		}

		return ""; 
	}

};

int main(int argc, char *argv[]) {
    cout << "Question 524 is solved" << endl;


    Solution so; 

    return 0;
}

__attribute__((constructor)) static void init() { 
	solution_vec[524] = main;
}
};

