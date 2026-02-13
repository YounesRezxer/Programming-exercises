#include <iostream>
using namespace std;

int main() {
    char a[100], b[100];
    int count[26] = { 0 };

    cin.getline(a, 100);
    cin.getline(b, 100);

    for (int i = 0; a[i] != '\0'; i++)
        if (a[i] >= 'a' && a[i] <= 'z')
            count[a[i] - 'a']++;

    for (int i = 0; b[i] != '\0'; i++)
        if (b[i] >= 'a' && b[i] <= 'z')
            count[b[i] - 'a']++;

    for (int i = 0; i < 26; i++)
        if (count[i] > 0)
            cout << char(i + 'a') << " " << count[i] << endl;

    return 0;
}


