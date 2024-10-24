#include <iostream>
#include <string> 

using std::string;
using std::ostream;  

class MyString: public string{
    public:
      //成员函数
      MyString(string x = ""); 
      MyString(const char* s);  

      // 符号重载
      MyString operator+(int n);
      MyString operator-(int n);
};

