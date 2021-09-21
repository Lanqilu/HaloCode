//
// Created by HALO on 2021/9/20.
//

#include <iostream>

using namespace std;


void swap1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "swap1 a = " << a << endl;
    cout << "swap1 b = " << b << endl;
}

void swap2(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 10;
    int b = 20;

    // 值传递
    swap1(a, b);

    // 地址传递
    swap2(&a, &b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    return 0;
}