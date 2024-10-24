#include <iostream>
using namespace std;
#include <cstdint>

int main() {

    long long input_s;
    int day;
    short hour;
    short m;
    short s;
    cout<<"How many seconds do you want to transfer:"<<endl;
    cin >> input_s;

    day = input_s/(24*3600);
    hour = (input_s%(24*3600))/3600;
    m = ((input_s%(24*3600))%3600)/60;
    s = ((input_s%(24*3600))%3600)%60;

    cout<<input_s<<"seconds; "<<day<<"days; "<<hour<<"hour; "<<m<<"mins; ";
    cout<<s<<"seconds"<<endl;

    system("pause");
    return 0;
}