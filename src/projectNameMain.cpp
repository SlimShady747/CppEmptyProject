#include <iostream>
#include <memory>
#include "includePlaceholder.h"


int main(int argc, char* argv[]) {
	// suppress warnings
	(void)argc;
	(void)argv;
	Derived a;
	std::cout<<"Calling foo..."<<std::endl;
	foo(&a);
	std::cout << "Done!" << std::endl;
	return 0;
}