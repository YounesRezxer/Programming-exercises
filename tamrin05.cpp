#include<iostream>
using namespace std;

void main() {
    int n;
    cout << "Enter a positive number: ";
    cin >> n;

    for (int i = 2; i < n; i++) {
        bool isPrime = true;
        for (int j = 2; j <= i / 2; j++) { //!!!!!
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << i << " ";
    }
    cout << endl;

	cin.get();
	cin.ignore();
}