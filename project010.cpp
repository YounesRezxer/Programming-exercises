#include <iostream>
using namespace std;

void main(){

    for (int i = 100; i<=999; i++) {
        if (i % 2 == 0 && i%3==0) { 
            cout << i << endl;
        }
    }

    cin.get();
    cin.ignore();
}
