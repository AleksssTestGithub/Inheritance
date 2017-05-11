#pragma once
#include "Parent.h"
class ProtectedChild :
	protected Parent
{
public:
	ProtectedChild();
	~ProtectedChild();
};

