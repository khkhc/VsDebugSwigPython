#pragma once
#include "../A/A.h"
class B
{
public:
	B(){};
	~B(){};

	D* inD(D* obj) { obj->A(); return obj; }
	D outD() { return D(); }

};
