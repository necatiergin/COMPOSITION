#include <iostream>

class Member {
private:
	friend class Owner;

	int m_i{};
	void foo();
};

class Owner {
public:
	void bar()
	{
		mx.m_i = 5; //valid
		mx.foo(); //valid
	}
private:
	Member mx{};
};
