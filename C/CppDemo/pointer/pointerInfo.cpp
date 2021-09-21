//
// Created by HALO on 2021/9/20.
// 指针的信息
//

#include <iostream>

using namespace std;

int main() {
    int a = 10;
    int *p = &a;

    // 32 位系统占 4 字节
    // 64 位系统占 8 字节
    cout << "int 指针所占的内存空间: \t" << sizeof(int *) << endl;
    cout << "double 指针所占的内存空间: " << sizeof(double *) << endl;
    cout << "float 指针所占的内存空间: \t" << sizeof(float *) << endl;
    cout << "char 指针所占的内存空间: \t" << sizeof(char *) << endl;
    cout << "p 所占的内存空间: \t\t" << sizeof(p) << endl;

    // 空指针 用于初始化指针变量
    // 空指针指向的内存是不可以访问
    // 0-255 之间的内存是系统占用，因此不可以访问
    int *p1 = nullptr;

    // 野指针 指针变量指向非法的内存空间
    int *p2 = (int *) 0x1100;

    return 0;
}
