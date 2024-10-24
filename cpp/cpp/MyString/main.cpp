#include <iostream>
#include <string>
#include "mystring.h" 

using namespace std;
int main()
{   
    string a;//要实现string类，要导入#include <string>
    int n;

    cout<<":) Please input some text for the string s. \n";
    cin >> a; 

    MyString s(a);

    cout <<":) Please input an integer.\n";
    cin >> n;

    cout<<"s+("<< n << ") is equal to:  "<< s+n << '\n';
    cout<<"s-("<< n << ") is equal to:  "<< s-n << '\n';

    system("pause");
    return 0; 
}
