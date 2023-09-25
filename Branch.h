#pragma once
#include <string>
class Branch
{
private:
	std::string elfName = "unknown";
	bool elfLeaves = false;
public:

	std::string get_elfName();
	void set_elfName(std::string);
	bool get_elfLeaves();
	void set_elfLeaves(bool);
};

