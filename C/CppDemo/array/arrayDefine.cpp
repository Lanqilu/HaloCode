//
// Created by HALO on 2021/9/19.
// 数组的定义
//

#include <iostream>

void printArr(int &arr);

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

// 一维数组的三种定义方式
void define1() {
    // 数据类型 数组名[数组长度]
    int intArray[5];
    intArray[0] = 0;
    intArray[1] = 1;
    intArray[2] = 2;
    intArray[3] = 3;
    intArray[4] = 4;

    // 打印数组
    int length = sizeof(intArray) / sizeof(intArray[0]);
    printArray(intArray, length);
}

void define2() {
    //  数据类型 数组名[数组长度] = {值1, 值2, ...}
    int intArray[5] = {1, 1, 2, 3, 4};

    // 打印数组
    int length = sizeof(intArray) / sizeof(intArray[0]);
    printArray(intArray, length);
}

void define3() {
    //  数据类型 数组名[] = {值1, 值2, ...}
    int intArray[] = {2, 1, 2, 3, 4};

    // 打印数组
    int length = sizeof(intArray) / sizeof(intArray[0]);
    printArray(intArray, length);
}


// 二维数组的四种定义方式
void define4() {
    // 数据类型 数组名[行数][列数]
    int arr[2][3];
    arr[0][0] = 0;
    arr[0][1] = 1;
    arr[0][2] = 2;
    arr[1][0] = 3;
    arr[1][1] = 4;
    arr[1][2] = 5;

    // 打印数组
    for (auto &i: arr) {
        for (int j: i) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void define5() {
    // 数据类型 数组名[行数][列数] = {{数据1, 数据2, ...}, {数据1, 数据2, ...}, ...}
    int arr[2][3] = {{1, 2, 3},
                     {4, 5, 6}};
    // 打印数组
    for (auto &i: arr) {
        for (int j: i) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void define6() {
    // 数据类型 数组名[行数][列数] = {数据1, 数据2, ...}
    int arr[2][3] = {2, 2, 3, 4, 5, 6};
    // 打印数组
    for (auto &i: arr) {
        for (int j: i) {
            cout << j << " ";
        }
        cout << endl;
    }
}

void define7() {
    // 数据类型 数组名[][列数] = {数据1, 数据2, ...}
    int arr[][3] = {3, 2, 3, 4, 5, 6};
    // 打印数组
    for (auto &i: arr) {
        for (int j: i) {
            cout << j << " ";
        }
        cout << endl;
    }
}


int main() {
    define1();
    define2();
    define3();
    define4();
    cout << endl;
    define5();
    cout << endl;
    define6();
    cout << endl;
    define7();
    return 0;
}