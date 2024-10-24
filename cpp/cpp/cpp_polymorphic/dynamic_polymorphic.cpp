// 动态多态--------是指在程序运行时根据对象的实际类型来确定要调用的函数，-------而不是根据变量或指针的类型来确定。
// 动态多态中，函数的调用是基于对象的实际类型，在运行时动态确定要调用的函数。
// 即使使用相同的函数名和参数列表，不同类型的对象也可能调用不同的函数实现。
// 动态多态提供了更大的灵活性，允许在运行时根据对象的实际类型来改变函数的行为。

// 动态多态在 C++ 中通过虚函数和继承来实现.实现步骤如下：
// step1: 通过将基类中的函数声明为虚函数，并在派生类中重写这些虚函数，可以实现动态多态。
// step2: 通过基类指针或引用指向派生类对象，并调用虚函数时，将根据对象的实际类型来确定要调用的函数。
#include <iostream>
class Shape {
    public:virtual void draw() {
        std::cout << "绘制图形" << std::endl;
    }// step1 基类成员函数加 virtual，动态多态
};
class Circle : public Shape {
    public: void draw() override {
        std::cout << "绘制圆形" << std::endl;
    }
};
class Rectangle : public Shape {
    public:void draw() override {
        std::cout << "绘制矩形" << std::endl;
    }
};
int main() {
    Shape* shapePtr;// step2：传指针
    Circle circle;Rectangle rectangle;
    // 通过基类指针 shapePtr 指向不同的派生类对象，并调用 draw() 函数，实现了动态多态。
    // 根据 shapePtr 指向的对象的实际类型，将调用相应派生类中的 draw() 函数。
    
    shapePtr = &circle;//通过指针访问指针所指向的内存的地址对应的数据,在此为变量circle.
    shapePtr->draw();   //对指针访问的数据进行draw()的函数操作               
   

    shapePtr = &rectangle;//保证传到了派生类，不走基类
    shapePtr->draw();   // 动态多态，调用Rectangle类中的draw函数
    return 0;
}
