#include <iostream>
#include <climits>
#include <exception>
#include <thread>

using namespace std;

int* ptr[5]{ };

void NewHandler()
{
	using namespace chrono_literals;
	cout << "failed to allocate memory" << endl;
	this_thread::sleep_for(1s);
	delete[] ptr[0];
	ptr[0] = nullptr;
}
int main()
{
	set_new_handler(NewHandler);
	try {
		for (int i = 0; i < 5; i++)
		{
			cout << "allocating memory #" << i << endl;
			ptr[i] = new int[INT_MAX / 10];
			cout << "success #" << i << endl;
		}
	}
	catch (exception& ex)
	{
		cout << "Exception :" << ex.what() << endl;
	}
}
