#include "Parent.h"



Parent::Parent()
{
}


Parent::Parent(int pV, int prV, int priV):
	publicVariable(pV), //publicVariable=pV; 
	protectedVariable(prV), //protectedVariable=prV;
	privateVariable(priV) //privateVariable=priV;
{
}

int Parent::getPrivateVariable()
{
	return privateVariable;
}

Parent::~Parent()
{
}
