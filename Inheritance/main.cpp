#include <iostream>
#include <conio.h>
#include "PublicChild.h"

using namespace std;

int main()
{
	Parent parent(0,0,0);
	parent.publicVariable;
	//parent.protectedVariable; inaccessible
	PublicChild pubChild;
	pubChild.publicVariable;
	//pubChild.protectedVariable; inaccessible
	_getch();
	return 0;
}