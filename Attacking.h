#pragma once
class Attacking
{
private:
	int m_dmg;
public:
	Attacking();			
	~Attacking();
	void set_dmg(const int);
	void attack(int&);
	template <class T>
	void attack();
};

