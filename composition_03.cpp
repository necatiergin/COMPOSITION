#include <iostream>

class Member {
public:
	Member()
	{
		std::cout << "Member default ctor.\n";
	}

	~Member()
	{
		std::cout << "Member destructor.\n";
	}
};

class Owner {
private:
	Member mx;																												  
};

int main()
{
	Owner owner;
}
