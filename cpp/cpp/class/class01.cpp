//以下为一个简单的类“vehicle”的实例
// 实例01
#include <iostream>
using namespace std;

class vehicle{
    private:
        float m_weight,m_speed,m_wheels,m_MFG;
    public:vehicle (float a, float b, float c, float d);//构造函数
        void opendoor() {
            printf("Hello,world");
            printf("\n");
        }
};
vehicle::vehicle(float weight, float speed, float wheels, float MFG) {
    m_weight = weight;
    m_speed = speed;
    m_wheels = wheels;
    m_MFG = MFG;
    std:: cout << "The class is initialized" << std::endl;
};
int main () {
    //相当于创建了一个对象vehicle_BYD属于vehicle的一员，并初始化它的值。

    vehicle vehicle_BYD(2000, 300, 4, 0.8);// 使用构造函数
    vehicle_BYD.opendoor();// 使用成员函数

    std:: cout << "fuck" << std::endl;
    return 0;
}
