#include "Tree.h"
#include <ctime>

void Tree::setTree() {
	std::srand(time(nullptr));
	int amount = rand() % 2 + 1;
	bigBranches.resize(amount);
	std::string branchName = "Branch number ";
	for (int i = 0; i < amount; i++) {
		bigBranches[i].checkIn(branchName + std::to_string(i+1));
		std::cout << i << std::endl;
	}
}

bool Tree::getNeighbours(std::string name) {
	bool found = false;
	int i;
	for (i = 0; i < bigBranches.size(); i++) {
		if (bigBranches[i].elfLeaves(name)) {
			found = true;
			break;
		}
	}
	if (!found) return false;
	std::cout << name << " has " << bigBranches[i].neighbours(name) << " neighbours." << std::endl;
	return true;
}