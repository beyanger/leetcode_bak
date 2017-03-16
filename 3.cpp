#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;


namespace S3 {

class Solution {
public:
	int lengthOfLongestSubstring(string s) {

		int len = s.size();
		int max_len = 0;
		vector<int> stat(256, -1);

		int m = 0;
		for (int i = 0; i < len; i++) {
			m = max(stat[s[i]]+1, m);
			stat[s[i]] = i;
			max_len = max(max_len, i-m+1);
		}

		return max_len;
	}
};



int main(int argc, char *argv[]) {

	if (argc != 2) {
		cout << "useage: ./a.out pattern_string\n";
		return 0;
	}


	S3::Solution so;
	auto ret = so.lengthOfLongestSubstring(argv[1]);

	cout << "Longest Substring Without Repeating Characters Length: " << ret << endl;
	
	return 0;
}



};
