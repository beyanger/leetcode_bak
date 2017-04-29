#include <vector>
#include <algorithm>
#include <iostream>
#include "main.h"

using namespace std;

namespace S458 {

class Solution {
public: 

    int poorPigs(int buckets, int minutesToDie, int minutesToTest) {
        if (buckets == 1) return 0;
        
        int status = minutesToTest/minutesToDie + 1;
        int res = 1;
        int ss = status;
        while (ss < buckets) {
            res++;
            ss *= status;
        }
        return res;
    }

};

int main(int argc, char *argv[]) {


    Solution so;

    cout << so.poorPigs(1000, 15, 60) << endl;
    return 0;
}

__attribute__((constructor)) static void init() { 
	solution_vec[458] = main;
}
};
