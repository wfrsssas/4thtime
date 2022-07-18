#include <iostream>
#include <string>


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

template<class T>
class StringValuePair : public Pair<std::string, T>
{
public:
	StringValuePair(std::string v1, T v2) : Pair<std::string, T>(v1, v2)
	{

	}

};



int main()
{
	StringValuePair<int> svp("Amazing", 7);
	std::cout << "Pair: " << svp.first() << ' ' << svp.second() << '\n';



	return 0;
}