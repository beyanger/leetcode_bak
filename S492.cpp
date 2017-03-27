

#include "S492.h"
#include <math.h>
#include <vector>
#include <algorithm>                
#include <iostream>

using namespace std;

namespace S492 {

class Solution {
public: 

    vector<int> constructRectangle(int area) {
        int i = (int) sqrt(area);
        while (area % i) i--;
        return {area/i, i};
    }

};

int main(int argc, char *argv[]) {

    cout << "Question 492 is solved" << endl;

    Solution so; 

    return 0;
}

};

