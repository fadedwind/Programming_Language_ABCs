// 函数模板和类模板都是 C++ 中的泛型编程工具，它们允许我们编写可以适用于多种数据类型的通用代码。

// 函数模板（Function Template）：
// 函数模板是一种用于生成函数定义的模板。它允许我们编写一次函数定义，然后可以根据不同的数据类型来生成具体的函数实例。

// 下面是一个函数模板的示例，用于交换两个值的函数：
template<typename T>
void swapValues(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}
// 在上述示例中，template<typename T> 表示这是一个函数模板，并且 T 是一个类型参数。我们可以根据需要选择不同的数据类型。

// 类模板（Class Template）：
// 类模板是一种用于生成类定义的模板。它允许我们编写一次类定义，然后可以根据不同的数据类型来生成具体的类实例。

// 下面是一个类模板的示例，用于实现一个通用的栈数据结构：
template<typename T>
class Stack {
private:
    static const int MAX_SIZE = 100;
    T data[MAX_SIZE];
    int top;

public:
    Stack() : top(-1) {}
    void push(T value) {
        if (top < MAX_SIZE - 1) {
            data[++top] = value;
        } else {
            // 栈已满，无法继续推入元素
        }
    }
    T pop() {
        if (top >= 0) {
            return data[top--];
        } else {
            // 栈为空，无法执行弹出操作
            // 可以返回一个默认值或者抛出异常
        }
    }

    bool isEmpty() {
        return top == -1;
    }
};
// 在上述示例中，template<typename T> 表示这是一个类模板，并且 T 是一个类型参数。我们可以在实例化时指定具体的数据类型。

// 使用函数模板和类模板，我们可以写出通用的、可重用的代码，以适应不同的数据类型，从而提高代码的灵活性和效率