#include<iostream>
using namespace std;

void main() {

	int n;
	cout << "Enter a number: ";
	cin >> n;

	int a = 0, b = 1;
	while (b < n) {
		int temp = b;
		b = a + b;
		a = temp;
	}

	cout << "Last Fibonacci less than " << n << " is: " << a << endl;
	cin.get();
	cin.ignore();
}