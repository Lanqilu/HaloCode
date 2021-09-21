//
// Created by HALO on 2021/9/20.
// 栈区
//

#include <iostream>

using namespace std;

int *func() {
    // 局部变量 存放在栈区，函数执行完后自动释放
    int a = 10;
    return &a;
}

int main() {
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    return 0;
}
