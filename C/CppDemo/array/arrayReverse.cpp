//
// Created by HALO on 2021/9/19.
// 数组反转
//

#include <iostream>

using namespace std;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};

    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

    // 打印数组
    int length = sizeof(arr) / sizeof(arr[0]);
    cout << "[";
    for (int i = 0; i < length - 1; i++) {
        cout << arr[i] << ", ";
    }
    cout << arr[length - 1];
    cout << "]" << endl;
}