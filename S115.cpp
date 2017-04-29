
#include <unordered_map>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <deque>
#include <vector>
#include <list>

#include "main.h"

using namespace std;

namespace S115 {
class Solution {
public:

	int numDistinct(string s, string t) {

		int ls = s.size(), lt =t.size();

		vector<vector<int>> dp(lt+1, vector<int>(ls+1, 0));

		for (int i = 0; i < ls; i++) dp[0][i] = 1;

		for (int i = 1; i <= lt; i++) {
			for (int j = 1; j <= ls; j++) {
				dp[i][j] = dp[i][j-1] + (s[j-1] == t[i-1] ? dp[i-1][j-1] : 0);
			}
		}


		return dp[lt][ls];
	}
};


int main(int argc, char *argv[]) {
	Solution so;
	string ss = "adbdadeecadeadeccaeaabdabdbcdabddddabcaaadbabaaedeeddeaeebcdeabcaaaeeaeeabcddcebddebeebedaecccbdcbcedbdaeaedcdebeecdaaedaacadbdccabddaddacdddc";
	string yy = "bcddceeeebecbc";


	string a = "rabbit";
	string b = "rabit";
	cout << so.numDistinct(a, b) << endl;

	return 0;
}
__attribute__((constructor)) static void init() { 
	solution_vec[115] = main;
}


};
