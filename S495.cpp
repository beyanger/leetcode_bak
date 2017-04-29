

#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;

namespace S495 {

class Solution {
public: 

    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int res = 0, len = timeSeries.size();
        int stop = 0;
        for (int i=0; i < len; i++) {
            res += duration - (timeSeries[i]<stop)*(stop - timeSeries[i]);
            stop = timeSeries[i] + duration;
        }
                
        return res;
    }
};

int main(int argc, char *argv[]) {
    cout << "Question 495 is solved" << endl;

    Solution so; 

    return 0;
}

__attribute__((constructor)) static void init() { 
	solution_vec[495] = main;
}
};

