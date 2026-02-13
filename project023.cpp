#include <iostream>
using namespace std;

int main() {
    char s[200];
    cin.getline(s, 200);

    int sum = 0, num = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= '0' && s[i] <= '9')
            num = num * 10 + (s[i] - '0');
        else {
            sum += num;
            num = 0;
        }
    }

    sum += num;
    cout << sum;
    return 0;
}
