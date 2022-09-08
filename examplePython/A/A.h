#pragma once
#include <vector>
class D
{
public:
	D(){};
	~D(){};

	void inVector(std::vector<int> obj) {}
	std::vector<int> outVector(std::vector<int> obj) { return obj; }

	const char* out() { return "A module"; }

	void A(){}
};