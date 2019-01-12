# C++ Primer Note

## Chapter01 预备知识
### 1. 本章目标
- C++和C有什么区别和联系
- C++有什么特性
- 链接是什么
- 如何在命令行里执行一个C++程序：要求依赖其他文件，接收命令行参数

### 2. C++ VS C
C语言：
1. 强调**算法**：面向过程，自顶向下，将大型程序分解成小型、便于管理的任务；
2. 融合低级语言的效率（*效率是如何体现的?C提供了低级硬件访问?*）和高级语言的通用性、可移植性；

C++语言：
1. 强调**数据**：面向对象，大型项目使用C++构建更容易被管理和理解(数据和对数据的操作的组合)
2. C++是C的超集，任何有效的C程序都是有效的C++程序；C++可以使用已有的C软件库

### 3. 链接
作用：将目标文件与该文件依赖的库的目标代码组合起来，生成可执行文件；

问题：如何组合的呢？

## Chapter02 开始学习C++
### 1. 目标
- C++文件的基本结构

### 2. gcc VS g++
参考链接：[知乎文章:g++ vs gcc](https://www.zhihu.com/question/20940822)， [stackoverflow文章](https://stackoverflow.com/questions/172587/what-is-the-difference-between-g-and-gcc?r=SearchResults)

GCC: GUN Compiler Collection

gcc: GUN C Compiler,gcc不能自动和使用的C++库链接

g++: GUN C++ Compiler, g++ == gcc -xc++ -lstdc++ -shared-libgcc

### 3. 程序结构
```c++
#include <iostream>

int main()
{
    using namespace std;
    cout << "Hello world cpp";
    cout << endl;
    return 0;
}

```
#### include
预处理器：在代码被编译之前，替换或添加文本；#include编译指令导致iostream文件的内容随源代码文件的内容一起被发送给编译器。实际上，iostream文件的内容将取代程序中的代码行#include\<iostream\>。原始文件没有被修改，*而是将源代码文件和iostream组合成一个复合文件*，编译的下一阶段将使用该文件。
#### 名称空间
作用：厂商将产品封装在一个叫做名称空间的单元中，这样可以用名称空间的名称来指出想使用哪个厂商的产品。
#### cout输出
cout：一个预定义的对象，*注意是个对象不是函数*，cout对象包含一个插入操作符号(<<)，可以理解为调用了cout对象的方法<<，该方法在屏幕上显示输入的字符串。

## 函数
函数原型：返回值类型 + 函数名 + 参数列表 + 分号；原型只描述函数接口；应在首次使用函数之前提供其原型；

函数定义：包含了函数代码；在使用函数前提供函数原型，但是函数的实现可以写在使用函数的地方的后边。
