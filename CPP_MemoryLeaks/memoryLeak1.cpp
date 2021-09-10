/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include <climits>
#include <exception>
#include <fstream>

using namespace std;

int * GetData()
{
	cout << "Enter value" << endl;
	int value;
	cin >> value;

	int* p_value;

	if (value > 100)
	{
		p_value = new int(value);
	}
	return p_value;
}

void serializeData(int *p)
{
	ofstream output("data.dat");
		if(!output)
		{
			cout << "failed to open the file" << endl;
	    }

		cout << *p << endl;
		output.close();
}

using namespace std;

int main()
{
	int* p = GetData();
	serializeData(p);
	cout << "data serialized" << endl;
	delete p;
}
