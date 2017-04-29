

#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;

namespace S460 {


class LFUCache {
public:
	LFUCache(int capacity) {

	}

	int get(int key) {
		return 0;
	}

	void put(int key, int value) {

	}
};


int main(int argc, char *argv[]) {
    cout << "Question 460 is created" << endl;


    return 0;
}

__attribute__((constructor)) static void init() { 
	solution_vec[460] = main;
}
};

