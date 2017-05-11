#pragma once
class Parent
{
private:
	Parent();
	int privateVariable;
protected:
	int protectedVariable;
public:
	int publicVariable;
	Parent(int pV, int prV, int priV);
	int getPrivateVariable();
	~Parent();
};

