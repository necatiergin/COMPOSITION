class Member {
private:
	int m_i{};
	void foo();
};


class Owner {
public:
	void bar()
	{
		mx.m_i = 5; //error - access control
		mx.foo(); //error - access control
	}
private:
	Member mx{};
};
