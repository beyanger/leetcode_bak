#!/usr/bin/env python
# -*- coding:utf-8 -*-

import sys, os

ccontent = '''
#include <vector>
#include <algorithm>                
#include <iostream>
#include "main.h"

using namespace std;

namespace S%s {

class Solution {
public: 

};

int main(int argc, char *argv[]) {
    cout << "Question %s is created" << endl;

    Solution so; 

    return 0;
}
__attribute__((constructor)) static void init() { 
    solution_vec[%s] = main;
} 
};

'''%(sys.argv[1], sys.argv[1], sys.argv[1])

def main():
	if len(sys.argv) != 2:
		print 'please input the question No. you want to create!'
		return False
	cfile = './S%s.cpp'%(sys.argv[1])

	if os.path.exists(cfile):
		print 'question is exists'
		return False
	with open(cfile, 'w') as c:
		c.write(ccontent)

if __name__ == '__main__':
    main()

