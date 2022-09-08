#pragma once
#include <vector>
class D
{
public:
	D() {};
	~D() {};

	void inVector(std::vector<int> obj) {}
	std::vector<int> outVector() { return std::vector<int>(); }

	const char* out() { return "C module"; }

	void C();
};