#include <iostream>
#include <conio.h>
#include "PublicChild.h"
#include "ProtectedChild.h"
#include "PrivateChild.h"

using namespace std;

class ManyParents : public PublicChild, protected ProtectedChild, private PrivateChild
{
public:
	ManyParents() {};
	~ManyParents() {};
};

int main()
{
	Parent parent(0,0,0);
	parent.publicVariable;
	//parent.protectedVariable; inaccessible (protected)
	PublicChild pubChild;
	pubChild.publicVariable;
	//pubChild.protectedVariable; inaccessible (protected)
	cout << pubChild.getPrivateVariable()<<endl;
	ProtectedChild protChild;
	//protChild.publicVariable; inaccessible (protected)
	PrivateChild privChild;
	//privChild.publicVariable; inaccessible (private)

	ManyParents mp;
	mp.PublicChild::publicVariable;
	mp.Parent::publicVariable;

	_getch();
	return 0;
}