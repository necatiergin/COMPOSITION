#include <iostream>

class Member {
public:
	Member()
	{
		std::cout << "Member default ctor.\n";
	}

	Member(const Member&)
	{
		std::cout << "Member copy ctor.\n";
	}
};

class Owner {
public:
	Owner()
	{
		std::cout << "Owner default ctor.\n";
	}

	Owner(const Owner & other) :mx(other.mx) 
	{
		std::cout << "Owner copy ctor.\n";
	}

	// ...

private:
	Member mx;
};

int main()
{
	Owner ox;
	Owner oy = ox;
}

/*
	Member default ctor.
	Owner default ctor.
	Member copy ctor.
	Owner copy ctor.
*/
