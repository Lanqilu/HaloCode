//
// Created by HALO on 2021/9/20.
// 定义指针
//
#include <iostream>

using namespace std;

int main() {
    int a = 10;
    // 定义一个指针 名字为 p
    int *p;
    // 取 a 的地址赋值到 p
    p = &a;

    cout << "变量 a 的地址: " << &a << endl;
    cout << "指针 p 的值为: " << p << endl;

    // 使用指针 *p 解引用
    *p = 10000;
    cout << " a = " << a << endl;
    cout << "*p = " << *p << endl;

    return 0;
}