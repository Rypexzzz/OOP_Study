#include "Branch.h"



void Branch::set_elfName(std::string name) {
	elfName = name;
}

void Branch::set_elfLeaves(bool life) {
	elfLeaves = life;
}

std::string Branch::get_elfName() {
	return elfName;
}

bool Branch::get_elfLeaves() {
	return elfLeaves;
}
