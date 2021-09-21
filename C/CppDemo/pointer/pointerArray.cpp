//
// Created by HALO on 2021/9/20.
// 利用指针访问数组
//
#include <iostream>

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int *p = arr;
    cout << "利用指针访问第一个元素: " << *p << endl;
    p++;
    cout << "利用指针访问第二个元素: " << *p << endl;

    int *p2 = arr;
    cout << "利用指针遍历数组" << endl;
    for (int i = 0; i < 10; ++i) {
        cout << *p2 << ", ";
        p2++;
    }


    return 0;
}