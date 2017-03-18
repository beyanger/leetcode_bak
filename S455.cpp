#include <vector>
#include <iostream>
#include <algorithm>


using namespace std;


namespace S455 {


class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        
        int lg = g.size(), ls = s.size();
        int pg = 0, ps = 0;

        while (pg < lg && ps < ls) {
            pg +=  (g[pg] <= s[ps]);            
            ps++;
        }

        return pg;     
    }
};


int main(int argc, char *argv[]) {

    std::vector<int> g = {1, 2};
    std::vector<int> s = {1, 2, 3};

    Solution so;
    int res = so.findContentChildren(g, s);
    cout << "result :" << res << endl;
	
	return 0;
}



};
