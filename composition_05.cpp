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

	Member(Member &&)
	{
		std::cout << "Member move ctor.\n";
	}
};

class Owner {
private:
	Member mx;
};

int main()
{
	Owner ox;
	Owner oy = std::move(ox);
}

/*
	Member default ctor.
	Member move ctor.
*/
