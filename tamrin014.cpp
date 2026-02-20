#include <iostream>
using namespace std;

int main() {
    int allTriangles = 0;
    int equilateral = 0;

    for (int a = 1; a <= 9; a++) {
        for (int b = 1; b <= 9; b++) {
            for (int c = 1; c <= 9; c++) {

                if (a + b > c && a + c > b && b + c > a) {
                    allTriangles++;

                    if (a == b && b == c) {
                        equilateral++;
                    }
                }
            }
        }
    }

    cout << "تعداد کل مثلث‌ها: " << allTriangles << endl;
    cout << "تعداد مثلث‌های متساوی‌الاضلاع: " << equilateral << endl;

    return 0;
}
