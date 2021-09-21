//
// Created by HALO on 2021/9/20.
// 冒泡排序
//

/*
 * 排序思想
 * 1. 比较相邻元素，如果第一个比第二个大，就交换位置
 * 2. 重复一轮找到一个最大值
 * 3. 回到步骤 1，每次的比较次数 -1，直到排序完成
 */

#include <iostream>

using namespace std;

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    int length = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    // 打印数组
    cout << "[";
    for (int i = 0; i < length - 1; i++) {
        cout << arr[i] << ", ";
    }
    cout << arr[length - 1];
    cout << "]" << endl;
}