#include<iostream>
using namespace std;

void main() {

    int n;
    cout << "Enter a positive number: ";
    cin >> n;

    int count = 0;
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            count++;
            sum += i;
        }
    }

    cout << "Number of divisors: " << count << endl;
    cout << "Sum of divisors: " << sum << endl;

    cin.get();
    cin.ignore();
}

//06