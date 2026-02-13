#include <iostream>
using namespace std;

struct student {
    char name[10];
    char field[10];
    float avr;
};



int main() {
    student s[10];

    for (int i = 0; i < 10; i++)
        cin >> s[i].name >> s[i].field >> s[i].avr;

    for (int i = 0; i < 9; i++)
        for (int j = 0; j < 9; j++)
            if (s[j].avr > s[j + 1].avr) {
                student t = s[j];
                s[j] = s[j + 1];
                s[j + 1] = t;
            }

    for (int i = 0; i < 10; i++)
        cout << s[i].name << endl;

    return 0;
}
