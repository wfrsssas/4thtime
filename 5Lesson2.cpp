﻿#include <iostream>

template<class T1, class T2>
class Pair
{
private:
	T1 m_first;
	T2 m_second;

public:
	Pair(T1 first, T2 second) : m_first(first), m_second(second)
	{

	}

	const T1& first() const { return m_first; }
	const T2& second() const { return m_second; }

};

int main()
{
	Pair<int, double> p1(6, 7.8);
	std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

	const Pair<double, int> p2(3.4, 5);
	std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

	return 0;
}