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
    size_t *m_length{};
    
public:    
   String(const char *pstr)
   {
    void *ptr = operator new(sizeof(size_t) + strlen(pstr)+1);
    m_length = new(ptr)size_t{strlen(pstr)};
    m_buffer = static_cast<char*>(ptr)+sizeof(size_t);
    strcpy(m_buffer,pstr);
       
   }
    
   ~String()
   {
     operator delete(m_length);
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
  cout << s.getlength() << endl;    //5
  cout << s.getString() << endl;    //hello
	
	
}
