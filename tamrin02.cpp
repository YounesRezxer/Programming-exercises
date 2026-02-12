#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

  
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            cout << "Vowel\n";
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
            cout << "Consonant\n";
        else if (ch >= '0' && ch <= '9')
            cout << "Digit\n";
        else
            cout << "Other character\n";

    return 0;
}
