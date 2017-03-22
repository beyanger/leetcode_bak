#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;

namespace S434 {

class Solution {

public:
    int countSegments(string s) {
        s.push_back(' ');
        int ls = s.size();
      
        int res = 0;
        for (int i = 1; i < ls; i++) {
            res += (s[i-1]!=' ' && s[i]==' ');
        }

        return res;
    }
};


class SolutionB {

public:
    int countSegments(string s) {
        int res = 0, ls = s.size();

        int space = 1;
        for (int i = 0; i < ls; i++) {
            if (s[i] != ' ') {
                res += space;
                space = 0;
            } else {
                space = 1;
            }
        }

        return res;
    }
};



int main(int argc, char *argv[]) {

    if (argc < 2) {
        cout << "usage: ./main \"this is a test\"";
    }

    Solution so;

    cout << so.countSegments(argv[1]) << endl;


	return 0;
}



};
