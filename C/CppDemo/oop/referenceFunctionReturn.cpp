//
// Created by HALO on 2021/9/20.
//
#include <iostream>

using namespace std;

// 返回局部变量引用
int &test01() {
    // 局部变量
    int a = 10;
    return a;
}

// 返回静态变量引用
int &test02() {
    static int a = 20;
    return a;
}

int main() {

    // 不能返回局部变量的引用
    int &ref = test01();
    // 非法操作
    // cout << "ref = " << ref << endl;

    // 如果函数做左值，那么必须返回引用
    int &ref2 = test02();
    cout << "ref2 = " << ref2 << endl;
    cout << "ref2 = " << ref2 << endl;

    test02() = 1000;

    cout << "ref2 = " << ref2 << endl;
    cout << "ref2 = " << ref2 << endl;

    return 0;
}