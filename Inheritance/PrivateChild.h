#pragma once
#include "Parent.h"
class PrivateChild :
	private Parent
{
public:
	PrivateChild();
	~PrivateChild();
};

