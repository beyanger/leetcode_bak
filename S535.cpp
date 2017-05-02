

#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;


namespace S535 {

class Solution {
public: 

	//Encodes a URL to a shortened URL.
	string encode(string longUrl) {
		return longUrl;
	}

	//Decodes a shortened URL to its original URL.
	string decode(string shortUrl) {
		return shortUrl;
	}

};

int main(int argc, char *argv[]) {
    cout << "Question 535 is created" << endl;

    Solution so; 

    return 0;
}
__attribute__((constructor)) static void init() { 
    solution_vec[535] = main;
} 
};


