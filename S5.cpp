#include <vector>
#include <iostream>
#include <algorithm>
#include <string>


using namespace std;


namespace S5 {

class Solution {
public:
	string longestPalindrome(string s) {

		int lens = s.size();
		int start = 0;
		int max_len = 1;

		for (int i = 1; i < lens; i++) {
			int m = i-1, n = i;
			int curr_len = 0;
			for (; 0 <= m && n < lens && s[m] == s[n]; m--, n++)
					curr_len += 2;	
			if (max_len < curr_len) {
				start = m+1; 
				max_len = curr_len;
			}

			curr_len = 1;
			m = i-1, n = i+1;
			for (; 0 <= m && n < lens && s[m] == s[n]; m--, n++)
					curr_len += 2;
			
			if (max_len < curr_len) {
				start = m+1;
				max_len = curr_len;
			}

		}
		return s.substr(start, max_len);

	}
};


class SolutionB {
public:
	string longestPalindrome(string s) {

		int lens = s.size();
		int start = 0;
		int max_len = 1;

		for (int i = 0; i < lens; i++) {
			int curr_len = 1, n = i+1, m = i-1;
			for (; n < lens && s[i] == s[n]; n++) curr_len++;
			for (; 0 <= m && n < lens && s[m] == s[n]; m--, n++) curr_len += 2;

			if (curr_len > max_len) {
				start = m+1;
				max_len = curr_len;
			}
		}

		return s.substr(start, max_len);

	}
};



int main(int argc, char *argv[]) {

	if (argc < 2) {
		cout << "usage: ./main pattern_str\n" << endl;
		return 0;
	}


	Solution so;


	string ret = so.longestPalindrome(argv[1]);

	cout << "longestPalindrome is: " << ret << endl;
	
	return 0;
}


};
