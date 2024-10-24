#include <iostream>
using namespace std;
#include <cstdint>

int f(int y, int m, int d);

int f(int y, int m, int d) {
    int x = 365*y + (y/4) + 30*(m-1) + d;

    if (m >= 3) 
        x = x - 2;
    if (m == 4 )
        x = x + 1;
    if (x == 6)
        x = x + 1;
    if (m == 8)
        x = x + 1;
    if (m == 9)
        x = x + 1;
    if (m == 11)
        x = x + 1;

    if (y % 4 == 0 && m <= 2) {
            x = x - 1;
    }

    return x;
}

int main()
{   
    int y1,m1,d1;
    cout << "Plaese input your birthday (e.g. : 2023 2 27) :" << endl;
    cin>>y1>>m1>>d1;

    int y2,m2,d2;
    cout << "Plaese input today's date (e.g. : 2023 2 27) :" << endl;
    cin>>y2>>m2>>d2;

    int res = f(y2,m2,d2) - f(y1,m1,d1);
    cout << "YOU HAVE COME TO THIS WORLD FOR " << res << " days." << endl;

    return 0;
}