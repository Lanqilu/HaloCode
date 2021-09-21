//
// Created by HALO on 2021/9/20.
// 结构体做函数参数
//

#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int age;
    int score;
};

void printStudentValue(Student student) {
    student.name = "Halo_Value";
    cout << student.name << " " << student.age << " " << student.score << endl;
}

void printStudentAddress(Student *student) {
    student->name = "Halo_Address";
    cout << student->name << " " << student->age << " " << student->score << endl;
}

// 加入 const 防止误操作
void printStudentConst(const Student *student) {
    cout << student->name << " " << student->age << " " << student->score << endl;
}

int main() {
    Student student = {"Halo", 19, 99};
    printStudentValue(student);
    cout << student.name << " " << student.age << " " << student.score << endl;
    printStudentAddress(&student);
    cout << student.name << " " << student.age << " " << student.score << endl;
    return 0;
}
