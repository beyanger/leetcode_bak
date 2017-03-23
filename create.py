#!/usr/bin/env python
# -*- coding:utf-8 -*-

import sys, os

hcontent = '''

#ifndef __S%s_H
#define __S%s_H 1

namespace S%s {

int main(int argc, char *argv[]);

};

#endif

'''%(sys.argv[1], sys.argv[1], sys.argv[1])

ccontent = '''

#include "S%s.h"
#include <vector>
#include <algorithm>                
#include <iostream>

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

};

'''%(sys.argv[1], sys.argv[1], sys.argv[1])


def main():
	if len(sys.argv) != 2:
		print 'please input the question No. you want to create!'
		return False
	hfile = './S%s.h'%(sys.argv[1])
	cfile = './S%s.cpp'%(sys.argv[1])

	if os.path.exists(hfile) or os.path.exists(cfile):
		print 'question is exists'
		return False

	with open(hfile, 'w') as h:
		h.write(hcontent)

	with open(cfile, 'w') as c:
		c.write(ccontent)

if __name__ == '__main__':
    main()

