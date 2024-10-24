// 命名空间（namespace）用于将代码元素（如变量、函数、类等）分组，以避免命名冲突，并提供更好的代码组织和模块化。

// 在给定的代码中，使用了两个命名空间：first 和 second。每个命名空间中都定义了一些变量。

// 通过使用命名空间，我们可以使用命名空间限定符来访问特定命名空间中的变量。
// 在代码中的 using 声明将特定命名空间中的变量引入到当前作用域，以便直接使用它们。

// 在 main() 函数中，使用了以下 using 声明：

// using first::x;
// using second::y;
// 这意味着我们可以直接使用 x 和 y 变量，它们分别引用了 first 和 second 命名空间中的对应变量。
// 这样做有助于简化代码，并提供了更清晰的命名空间限定符。

// 例如，通过 cout << x，我们可以直接输出 first 命名空间中的变量 x 的值。



// 使用命名空间可以避免全局命名冲突，使代码更易读、更易维护。
// 同时，命名空间还提供了一种组织和封装相关代码的方法，有助于构建模块化的程序结构。