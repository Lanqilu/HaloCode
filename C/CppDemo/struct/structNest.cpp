//
// Created by HALO on 2021/9/20.
// 结构体嵌套
//

#include <iostream>
#include <string>

using namespace std;


struct Student {
    string name;
    int age;
    int score;
};

struct Teacher {
    string name;
    int id;
    int age;
    Student student;
};


int main() {
    Student student = {"Halo_Student", 18, 100};
    Teacher teacher = {"Halo_Teacher", 1, 18, student};

    cout << teacher.student.name << endl;

    return 0;
}