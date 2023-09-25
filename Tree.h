#pragma once
#include <vector>
#include <iostream>
#include "BigBranch.h"
class Tree
{
private:
	std::vector<BigBranch> bigBranches;
public:
	void setTree();
	bool getNeighbours(std::string);
};

