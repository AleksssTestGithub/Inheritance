#include <iostream>
#include <conio.h>
#include "PublicChild.h"
#include "ProtectedChild.h"

using namespace std;

int main()
{
	Parent parent(0,0,0);
	parent.publicVariable;
	//parent.protectedVariable; inaccessible
	PublicChild pubChild;
	pubChild.publicVariable;
	//pubChild.protectedVariable; inaccessible
	cout << pubChild.getPrivateVariable()<<endl;
	ProtectedChild protChild;
	//protChild.publicVariable; inaccessible
	_getch();
	return 0;
}