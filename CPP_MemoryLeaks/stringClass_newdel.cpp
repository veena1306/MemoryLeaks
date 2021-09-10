
/******************************************************************************

                              Online C++ Debugger.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Debug" button to debug it.

*******************************************************************************/

#include <iostream>
#include <cstring>

using namespace std;

class String
{
private:
    char *m_buffer{};
    int *m_length{};
    
public:    
   String(const char *pstr)
   {
    m_length = new int (strlen(pstr));
    m_buffer = new char[*m_length+1];
    strcpy(m_buffer,pstr);
       
   }
    
   ~String()
   {
     delete m_length;
     delete [] m_buffer;
   }
   
   int getlength() const
   {
     return *m_length;
   }
   
   const char *getString() const
   {
       return m_buffer;
   }
};

int main()
{
  String s("hello");
  cout << s.getlength() << endl;   //5
  cout << s.getString() << endl;   // hello
	
	
}


















