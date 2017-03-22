#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

namespace S474 {

class Solution {


static int is0;

struct node {
    int m, n;
    node(int n0, int n1) : m(n0), n(n1) {}
    bool operator<(const node & o) const {
        if (is0) {
            return m!=o.m ? m < o.m : n < o.n;
        } 
        return n!=o.n ? n<o.n : m<o.m;
    }
};



public: 
   int findMaxForm(vector<string>& strs, int m, int n) {
        std::vector<node> v;
        is0 = m > n;
        int len = strs.size();
        for (int i =0; i < len; i++) {
            string & s = strs[i];
            int ls = s.size();
            int m=0, n=0;

            for (int j = 0; j < ls; j++) {
                bool isok = s[j] == '0';
                m += isok;
                n += !isok;
            }
            v.push_back(node(m, n));
        }

        sort(v.begin(), v.end());




        return 0;
    }
};

int main(int argc, char *argv[]) {
    cout << "Question 474 is created" << endl;

    Solution so;

    return 0;
}

};
