#include<iostream>
using namespace std;

void main() {
	//10-1
	//int n;
	//for (int i = 6; n >= 1; n--) {
	//	cout << i << " ";
	//}
	//for (int i = n - 1; i >= 1; i--) {
	//	cout << i << " ";
	//}
	//cout << endl;

	for (int i = 6; i >= 1; i--) {

		for (int j = 1; j <= i; j++)
			cout << j << " ";

		for (int j = i - 1; j >= 1; j--)
			cout << j << " ";

		cout << endl;
	}

	cin.get();
	cin.ignore();
}


//10-2
// 
// 
//for (int i = 6; i >= 1; i--) {
//	if (i % 2 == 0)
//		cout << string(i, '*');
//	else
//		cout << string(i, '#');
//
//	cout << endl;
//}