#include <iostream>
template<class T>
class Pair1
{
private:
	T* m_data;

public:
	Pair1(T v1, T v2)
	{
		m_data = new T[2];
		*m_data = v1;
		*(m_data + 1) = v2;
	}

	~Pair1()
	{
		delete[] m_data;
	}

	T first() const { return *m_data; }
	T second() const { return *(m_data + 1); }
};

int main()
{
	Pair1<int> p1(6, 9);
	std::cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';

	const Pair1<double> p2(3.4, 7.8);
	std::cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';


	return 0;
}

