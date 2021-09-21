//
// Created by HALO on 2021/9/19.
// 数组的信息
//

#include <iostream>

using namespace std;

void printArray(int *arr, int length) {
    // 打印数组
    cout << "[";
    for (int i = 0; i < length - 1; i++) {
        cout << arr[i] << ", ";
    }
    cout << arr[length - 1];
    cout << "]" << endl;
}

void info1() {
    int intArray[] = {0, 1, 2, 3, 4};

    cout << "数组的首地址为: \t\t" << (long long) intArray << endl;
    cout << "数组中第一个元素地址为: " << (long long) &intArray[0] << endl;
    cout << "数组中第二个元素地址为: " << (long long) &intArray[1] << endl;
    cout << "占用内存空间为: \t\t" << sizeof(intArray) << endl;
    cout << "每个元素占用内存空间为: " << sizeof(intArray[0]) << endl;
    cout << "数组中元素个数为: \t\t" << sizeof(intArray) / sizeof(intArray[0]) << endl;

    // 打印数组
    int length = sizeof(intArray) / sizeof(intArray[0]);
    printArray(intArray, length);
}

void info2() {
    int arr[2][3] = {{1, 2, 3},
                     {4, 5, 6}};

    cout << "数组的首地址为: \t\t" << (long long) arr << endl;
    cout << "第一行数据首地址为: \t" << (long long) arr[0] << endl;
    cout << "第一个元素的地址为: \t" << (long long) &arr[0][0] << endl;
    cout << "第二行数据首地址为: \t" << (long long) arr[1] << endl;
    cout << "占用内存空间为: \t\t" << sizeof(arr) << endl;
    cout << "第一行占用内存空间为: \t" << sizeof(arr[0]) << endl;
    cout << "一个元素占用内存空间为: " << sizeof(arr[0][0]) << endl;
    cout << "二维数组的列数为: \t\t" << sizeof(arr[0]) / sizeof(arr[0][0]) << endl;
    cout << "二维数组的行数为: \t\t" << sizeof(arr) / sizeof(arr[0]) << endl;
    cout << "数组中元素个数为: \t\t" << sizeof(arr) / sizeof(arr[0][0]) << endl;

    // 打印数组
    int row = sizeof(arr) / sizeof(arr[0]);
    int column = sizeof(arr[0]) / sizeof(arr[0][0]);
    cout << "[";
    for (int i = 0; i < row; i++) {
        cout << "[";
        for (int j = 0; j < column; j++) {
            cout << arr[i][j];
            if (j != column - 1) {
                cout << ", ";
            }
        }
        if (i == row - 1) {
            cout << "]";
        } else {
            cout << "], ";
        }

    }
    cout << "]";
}

int main() {
    info1();
    cout << endl;
    info2();
    return 0;
}