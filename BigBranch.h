#pragma once
#include <vector>
#include <iostream>
#include "Branch.h"

class Branch1
{
private:
	std::string elfName = "unknown";
	bool elfLeaves = false;
public:
	std::string get_elfName() {
		return elfName;
	}
	void set_elfName(std::string name) {
		elfName = name;
	}
	bool get_elfLeaves() {
		return elfLeaves;
	}
	void set_elfLeaves(bool f) {
		elfLeaves = f;
	}
};

class BigBranch :
	Branch1
{
private:
	std::vector<Branch> branches;
public:
	bool elfLeaves(std::string);
	int neighbours(std::string);
	void checkIn(std::string);
};
