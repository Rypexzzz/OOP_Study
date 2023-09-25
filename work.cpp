#include <iostream>
#include "Tree.h"
#include "work.h"

void work() {
	Tree forest[5];
	for (int i = 0; i < 5; i++) {
		forest[i] = Tree();
		forest[i].setTree();
	}

	std::cout << "Input name of the elf you are looking for:" << std::endl;
	std::string name;
	std::cin >> name;
	bool notFound = true;
	
	for (int i = 0; i < 5; i++) {
		if (forest[i].getNeighbours(name)) {
			notFound = false;
			break;
		}
	}

	if (notFound) std::cout << "Not found" << std::endl;

}
