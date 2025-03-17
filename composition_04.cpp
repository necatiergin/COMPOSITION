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
	Member copy ctor.
*/
