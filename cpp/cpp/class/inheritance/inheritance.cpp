// -----类的继承是面向对象编程中的一个重要概念，它允许创建一个新类（称为派生类或子类），该类继承了另一个已有类（称为基类或父类）的属性和行为。
// -----继承使得派生类可以重用基类的代码，并且可以在此基础上添加新的成员变量和成员函数，或者修改已有的成员变量和成员函数的行为。

// 在C++中，继承关系通过以下语法实现：

class BaseClass{};
class DerivedClass : BaseClass {
    // 派生类的成员变量和成员函数
};
// 其中，DerivedClass 是派生类的名称，BaseClass 是基类的名称。访问控制符 可以是 public、protected 或 private，'
// 用于指定派生类对基类成员的访问权限，默认为 private。

// 继承关系可以分为以下几种类型：

// 公有继承（Public Inheritance）：使用 public 关键字表示。在公有继承中，基类的公有成员在派生类中仍然是公有的，基类的保护成员在派生类中变为保护的，基类的私有成员在派生类中不可访问。
// 保护继承（Protected Inheritance）：使用 protected 关键字表示。在保护继承中，基类的公有和保护成员在派生类中变为保护的，基类的私有成员在派生类中不可访问。
// 私有继承（Private Inheritance）：使用 private 关键字表示。在私有继承中，基类的公有和保护成员在派生类中变为私有的，基类的私有成员在派生类中不可访问。

// 派生类可以访问基类的公有和保护成员，但无法直接访问基类的私有成员。可以使用成员访问控制符来控制对基类成员的访问权限。

// 以下是一个简单的继承示例：

#include <iostream>
class Base {
public:
    int public_Var;
    void publicFunction() {
        std::cout << "This is a public function in the base class." << std::endl;
    }
protected:
    int protected_Var;
    void protectedFunction() {
        std::cout << "This is a protected function in the base class." << std::endl;
    }
private:
    int private_Var;
    void privateFunction() {
        std::cout << "This is a private function in the base class." << std::endl;
    }
};
class Derived : public Base {//公有继承
public:
    void derivedFunction() {
        public_Var = 10;        // 可访问基类的公有成员
        protected_Var = 20;    // 可访问基类的保护成员
        
        publicFunction();     // 可调用基类的公有函数
        protectedFunction(); // 可调用基类的保护函数
    }
};
int main() {
    Derived derivedObj;
    derivedObj.public_Var = 30;     // 可访问派生类中继承的公有成员
    derivedObj.publicFunction();   // 可调用派生类中继承的公有函数
    return 0;
}

// 在上述示例中，Base 是基类，Derived 是派生类。派生类 Derived 公开继承了基类 Base。
// 派生类可以访问基类的公有和保护成员，通过派生类对象可以访问派生类中继承的公有成员和函数。

// 通过继承，派生类可以重用基类的代码，并在此基础上添加新的功能。这提高了代码的可重用性、可扩展性和可维护性