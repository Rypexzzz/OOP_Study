#include "BigBranch.h"

bool BigBranch::elfLeaves(std::string name) {
	for (int i = 0; i < branches.size(); i++) 
		if (branches[i].get_elfName() == name && branches[i].get_elfLeaves()) return true;
	if (this->get_elfName() == name && this->get_elfLeaves()) return true;
	return false;
}

int BigBranch::neighbours(std::string name) {
	int counter = 0;
	for (int i = 0; i < branches.size(); i++)
		if (branches[i].get_elfName() != name && branches[i].get_elfLeaves()) counter++;
	if (this->get_elfName() != name && this->get_elfLeaves()) counter++;
	return counter;
}

void BigBranch::checkIn(std::string name) {
	int amount;
	amount = rand() % 2 + 2;
	branches.resize(amount);
	std::string buf;
	std::cout << "Branch: " << name << std::endl;
	for (int i = 0; i < amount; i++) {
		std::cout << "Input elf name:" << std::endl;
		std::cin >> buf;
		if (buf != "none") {
			branches[i].set_elfName(buf);
			branches[i].set_elfLeaves(true);
		}
		std::cout << "Input elf name:" << std::endl;
		std::cin >> buf;
		if (buf != "none") {
			this->set_elfName(buf);
			this->set_elfLeaves(true);
		}
	}
}