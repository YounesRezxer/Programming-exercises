#include<iostream>
using namespace std;

int main(){

    int a, b, c;
    float d;

    cout << "Enter your 3 number : " << endl;

    cin >> a; 
    cin >> b;
    cin >> c;

    d = (a+b+c) / 3.0;
    cout << d << endl;

    cin.get();
    cin.ignore();
}