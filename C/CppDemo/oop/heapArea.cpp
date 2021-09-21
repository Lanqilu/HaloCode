//
// Created by HALO on 2021/9/20.
// 堆区
//

#include <iostream>

using namespace std;

int *func() {
    int *p = new int(10);
    return p;
}

void func2() {
    int *arr = new int[10];
    for (int i = 0; i < 10; ++i) {
        arr[i] = i + 100;
    }
    for (int i = 0; i < 10; ++i) {
        cout << arr[i] << " ";
    }
    delete[] arr;
}


int main() {
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;

    delete p;

    func2();


    return 0;
}
