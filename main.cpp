
#include "main.h"

#include <iostream>
#include <string.h>


using std::endl;
using std::cout;

solution_t solution_vec[1024];

void show_solved_item();

int main(int argc, char *argv[]) {

	if (argc < 2) {
		std::cout << "./main question No.\n";
		return 0;
	}


    if (memcmp(argv[1], "--list", 6) == 0) {
        show_solved_item();
        return 0;
    }

	int index = atoi(argv[1]);

	if (!(1 <= index && index <= 1023)) {
		std::cout << "please input the correct qeustion No.\n";
		return 0;
	}

	argv[1] = argv[0];

	if (solution_vec[index]) 
		return solution_vec[index](argc-1, argv+1);
	else 
		std::cout << "this problem isnot solved, maybe you can do it!\n";
	return 0;
}

void show_solved_item() {
    cout << "sovled item: " << endl;

    for (int i = 0; i < sizeof(solution_vec)/sizeof(solution_vec[0]); i++) {
        if (solution_vec[i]) 
            cout << "\t" << i << endl;
    }
}

