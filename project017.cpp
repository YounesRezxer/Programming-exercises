#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100], b[100];
    int count = 0;

    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++) {
        if (a[i] == b[i])
            count = count + 1;
    }

    cout << count;
    return 0;
}
