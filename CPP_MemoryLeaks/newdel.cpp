#include <iostream>
using namespace std;

class Number
{
private:
	int m_number;
public:
	Number(int number) :m_number(number)
	{

	}

	~Number()
	{

	}
};

int main()
{
	int* ptr = new int{ 5 };
	delete ptr;
}
