#include<iostream>
#include<string>
using namespace std;

int main(){

    string s = "9 7 5 3 1 2 4 6 8 10";
    int len = s.length();
    for (int i = 0;i<5; i++  ){
        cout <<s.substr(i*2, len-i*2) << endl;

    }

    cin.get();
    cin.ignore();
}