//
// Created by HALO on 2021/9/20.
//
#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int b = 20;

    // const 修饰指针: 常量指针
    // 指针的指向可以修改，但不能利用该指针修改指向的值
    const int *p1 = &a;
    p1 = &b;
    // *p1 = 100; 错误用法

    // const 修饰常量: 指针常量
    // 指针的指向不可以该，但指针指向的值可以改
    int *const p2 = &a;
    *p2 = 100;
    // p2 = &b; 错误用法

    // const 即修饰常量又修饰指针
    // 都不可以改
    const int *const p3 = &a;
    // p3 = &b;
    // *p3 = 100;

    return 0;
}