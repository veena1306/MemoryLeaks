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

void print(int *p)
{
    cout << *p <<endl;    
}


int main()
{
	int* p = new int{5};
	delete p;
	p = nullptr;
	//*p = 100;
	print(p);
	//delete p;
}

//*** Error in `./a.out': double free or corruption (fasttop): 0x00000000022d8c20 ***
