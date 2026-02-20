#include <iostream>
using namespace std;

void main() {
	for (int i = 6; i >= 1; i--) {

		for (int j = 1; j <= i; j++) {
			cout << j << " ";
		}
	
		for (int j = i - 1; j >= 1; j--) {
			cout << j << " ";
		}
		cout << endl;
	}

	cin.get();
	cin.ignore();
}


//02
/*/
#include <iostream>
using namespace std;

void main() {
for (int i = 6; i >= 1; i--) {
if (i % 2 == 0) {
// سطر با #
for (int j = 0; j < i; j++) cout << "#";
} else {
// سطر با *
for (int j = 0; j < i; j++) cout << "*";
}
cout << endl;
}
	cin.get();
	cin.ignore();
}
*/