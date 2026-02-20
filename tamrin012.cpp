#include <iostream>
using namespace std;

void main() {
    int sum = 0;

        for (int i = 10; i <= 99; i++) {
            sum += i;
        }

    cout << "Sum of all two-digit numbers: " << sum << endl;

    if (sum % 2 != 0) {
        cout << "The sum is odd!" << endl;
    }

}
