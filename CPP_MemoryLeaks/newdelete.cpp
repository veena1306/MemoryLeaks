/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
	//int *ptr = new int;    //0
	//cout << *ptr << endl;
	
	//int *ptr = new int(1);   //1
	//cout << *ptr << endl;
	
	int *ptr = new int[5]{1,2,3,4};
	//cout << *ptr << endl;
	
	for (int i = 0; i < 5 ; ++i)
	{
	    cout << ptr[i] << endl;
	}
	
	
}
