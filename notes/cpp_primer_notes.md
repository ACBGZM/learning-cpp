### 第一章 开始

#### 1.2 初时输入输出

###### 标准输入输出

C++语言未定义任何输入输出语句，取而代之，包含了一个全面的标准库来提供IO机制。

标准库定义了四个IO对象：

- cin：istream类型的对象，处理输入；
- cout：ostream类型的对象，处理输出；
- cerr：ostream类型的对象，输出警告和错误信息；
- clog：ostream类型的对象，输出程序运行时的一般性信息

###### 向流写入数据

输出运算符`<<`接受两个运算对象：左侧是一个ostream对象，右侧是要打印的值，这个运算符的计算结果就是其左侧运算对象。

`endl`是一个被成为操作符（manipulator）的特殊值，写入它的效果是结束当前行，并将与设备关联的缓冲区（buffer）中的内容刷到设备中。缓冲刷新操作可以保证到目前为止程序所产生的所有输出都真正写入输出流中，而不是停留在内存中等待写入流。

###### 从流读取数据

输入运算符`>>`与输出运算符类似，返回其左侧运算对象，也就是istream对象作为计算结果。

###### 使用标准库中的名字

`std::`指出名字`endl`和`cout`是定义在名为std的命名空间（namespace）中的。命名空间可以帮助我们避免不经意的名字定义冲突，以及使用库中相同名字导致的冲突。

标准库定义的所有名字都在命名空间std中。










