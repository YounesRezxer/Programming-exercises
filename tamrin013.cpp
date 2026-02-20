#include <iostream>
using namespace std;

void main() {
    for (int i = 5; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << endl;


    for (int i = 9; i >= 1; i -= 2) {
        for (int j = 1; j <= i; j += 2) {
            cout << j << " ";
        }
        cout << endl;
    }

	cin.get();
	cin.ignore();

}


//1 2 3 4 5
//1 2 3 4 
//1 2 3 
//1 2
//1
//1 3 5 7 9 
//1 3 5 7 
//1 3 5
//1 3
//1