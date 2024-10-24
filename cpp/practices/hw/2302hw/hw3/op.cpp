#include <iostream>
using namespace std;

class Time{
    public:
        int hours;
        int minutes;
        int seconds;

        Time operator+(Time A);
        Time operator-(Time A);
        Time operator*(Time A);
        Time operator/(Time A);
        bool operator>(Time A);
        bool operator<(Time A);
        Time operator=(Time A);
        bool operator==(Time A);
        void show_time();

        Time(int h, int m, int s); 
        void set_value(int h, int m, int s){
            hours = h;
            minutes = m;
            seconds = s;
        }
};

Time::Time(int h, int m, int s){
    hours = h;
    minutes = m;
    seconds = s;
}


Time Time::operator+(Time A) {

    int temp_hours = hours + A.hours;
    int temp_minutes = minutes + A.minutes;
    int temp_seconds = seconds + A.seconds;
    
    Time temp_time(temp_hours, temp_minutes, temp_seconds);
    return temp_time;
}
Time Time::operator-(Time A) {

    int temp_hours = hours - A.hours;
    int temp_minutes = minutes - A.minutes;
    int temp_seconds = seconds - A.seconds;
    
    Time temp_time(temp_hours, temp_minutes, temp_seconds);
    return temp_time;
}
Time Time::operator*(Time A) {

    int temp_hours = hours * A.hours;
    int temp_minutes = minutes * A.minutes;
    int temp_seconds = seconds * A.seconds;
    
    Time temp_time(temp_hours, temp_minutes, temp_seconds);
    return temp_time;
}
Time Time::operator/(Time A) {

    int temp_hours = hours / A.hours;
    int temp_minutes = minutes / A.minutes;
    int temp_seconds = seconds / A.seconds;
    
    Time temp_time(temp_hours, temp_minutes, temp_seconds);
    return temp_time;
}
bool Time::operator>(Time A) {

    if (hours > A.hours)
        return true;
    else if(minutes > A.minutes)
        return true;
    else if(seconds > A.seconds)
        return true;
    else
        return false;
}
bool Time::operator<(Time A) {

    if (hours < A.hours)
        return true;
    else if(minutes < A.minutes)
        return true;
    else if(seconds < A.seconds)
        return true;
    else
        return false;
}
Time Time::operator=(Time A) {

    int temp_hours = A.hours;
    int temp_minutes = A.minutes;
    int temp_seconds = A.seconds;
    
    Time temp_time(temp_hours, temp_minutes, temp_seconds);
    return temp_time;
}
bool Time::operator==(Time A) {

    if (hours == A.hours && minutes == A.minutes && seconds == A.seconds)
        return true;
    return false;
}

void Time::show_time() {
    cout << hours<<":"<<minutes<<":"<<seconds << endl;
}


void operator<<(istream &os, Time &T){
    cout <<T.hours<<":"<<T.minutes<<":"<<T.seconds;
}
void operator>>(istream &is, Time &T1){
    int h,m,s;
    cin>>h>>m>>s;
}
Time inputTime(istream &cin) {
    int h,m,s;
    cin>>h>>m>>s;
    Time T1(h,m,s);
    Time T2 = T1;
    return T2;
}
Time outputTime(ostream &cout) {
    int h,m,s;
    cout<<h<<":"<<m<<":"<<s;
    Time T1(h,m,s);
    Time T2 = T1;
    return T2;
}

int main() {
    int h,m,s;
    cin>>h>>m>>s;
    Time T1(h,m,s);

    Time time1(1,2,3);
    Time time2(4,5,6);

    Time time3 = time1 + time2;
    time3.show_time();
    Time time4 = time1 - time2;
    time4.show_time();
    Time time5 = time1 * time2;
    time5.show_time();
    Time time6 = time1 / time2;
    time6.show_time();
    
    bool a = bool (time1 < time2);
    cout << a << endl;
    bool b = bool (time1 > time2);
    cout << b << endl;
    Time time7 = time1;
    time7.show_time();
    bool c = bool (time1 == time2);
    cout << c << endl;

    Time time8(0,0,0);
    cin >> time8;
    time8.show_time();
    return 0;
}
