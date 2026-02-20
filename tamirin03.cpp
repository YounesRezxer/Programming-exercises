//03

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Enter a, b, c: ";
    cin >> a >> b >> c;

        double delta = b * b - 4 * a * c;

    if (delta >= 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Roots: " << x1 << " , " << x2 << endl;
    }
    else {
        cout << "Complex roots" << endl;
    }

    return 0;

}
