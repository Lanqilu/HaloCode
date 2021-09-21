//
// Created by HALO on 2021/9/20.
//

#include <iostream>

using namespace std;

struct Student {
    string name;
    int age;
    int score;
};

int main() {

    Student student = {"Halo", 18, 100};

    // 通过指针指向结构体
    Student *p = &student;

    // 通过指针访问结构体中的变量
    cout << p->name << " " << p->age << " " << p->score << endl;

    return 0;
}