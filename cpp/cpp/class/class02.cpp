//实例2
#include <iostream>
using namespace std;
//对象是类的具体化
class Human // class name
{   
    // class data:
    private:
        float m_height;
        float m_weight;
        bool m_gender;
        char m_hometown[100];

    public:// 公有，可被外部函数使用
        float m_fund;
        void CallMeGieGie();
        void TellMeHeight();

    protected:
        // 介于private和public之间

};// 类的设计
//内部函数，成员函数：
void Human::CallMeGieGie()  {
    cout<<"GieGie!!!!!"<<endl;
    return;
}
void Human::TellMeHeight() {

    float Height = ((int)m_height/10 + 1)*10;
    if (m_height < 175) {
        std::cout << "My height is" << m_height << "cm" <<endl;
    }else {
        cout << "My height is" << Height << "cm" <<endl;
    }
    return;
}
//外部函数：
float SubmitSalary(Human x, Human y) {
// the function give the attribut m_fund of y to the m_fund of x

    float submitted_salary = y.m_fund;

    x.m_fund += y.m_fund;
    y.m_fund= 0.0;

    return submitted_salary;
};
int main() {
    Human XiaoMei;
    Human XiaoMing;
    float submitted_salary;

    //通过"."操作成员函数
    XiaoMei.CallMeGieGie();
    XiaoMei.TellMeHeight();
    SubmitSalary(XiaoMei, XiaoMing);

    cout<< "The salary of XiaoMei is " << XiaoMei.m_fund << endl;

}
