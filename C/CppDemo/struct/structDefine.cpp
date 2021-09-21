//
// Created by HALO on 2021/9/20.
//

#include <iostream>
#include <string>

using namespace std;

// 学生数据类型
struct Student {
    // 成员列表
    string name;
    int age;
    int score;
} s3;


int main() {
    // 创建具体学生
    // struct 可以省略
    struct Student s1;
    s1.name = "Halo_1";
    s1.age = 18;
    s1.score = 100;
    cout << s1.name << " " << s1.age << " " << s1.score << endl;


    Student s2 = {"Halo_2", 19, 99};
    cout << s2.name << " " << s2.age << " " << s2.score << endl;

    s3.name = "Halo_3";
    s3.age = 20;
    s3.score = 98;
    cout << s3.name << " " << s3.age << " " << s3.score << endl;
    return 0;
}