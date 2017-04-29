#include <vector>
#include <algorithm>
#include <iostream>
#include "main.h"

using namespace std;

namespace S481 {

class Solution {
public: 
    int magicalString(int n) {
        string s = "122";
        int index = 2;
        while(s.length() < n) {
            int cnt = s[index] - '0';
            char c = (s.back() == '1' ? '2' : '1');
            string temp(cnt, c);
            s += temp;
            index++;
        }
        return count(s.begin(), s.begin()+n, '1');
    }

};

int main(int argc, char *argv[]) {
    cout << "Question 481 is created" << endl;

    Solution so;
//
 

    so.magicalString(100000);
    cout << endl;
    return 0;
}

__attribute__((constructor)) static void init() { 
	solution_vec[481] = main;
}
};


