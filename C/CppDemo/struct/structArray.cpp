//
// Created by HALO on 2021/9/20.
//

#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int age;
    int score;
};

int main() {
    Student stuArray[] = {
            {"Halo_1", 18, 100},
            {"Halo_2", 19, 99},
            {"Halo_2", 20, 98},
    };
    stuArray[1].score = 100;
    stuArray[2].score = 100;

    for (int i = 0; i < 3; ++i) {
        cout << stuArray[i].name << " " << stuArray[i].age << " " << stuArray[i].score << endl;
    }

    return 0;
}
