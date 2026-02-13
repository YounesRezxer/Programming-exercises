#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[20][20];
    int flag = 1;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    int sum = 0;
    for (int j = 0; j < n; j++)
        sum += a[0][j];

    for (int i = 1; i < n; i++) {
        int s = 0;
        for (int j = 0; j < n; j++)
            s += a[i][j];
        if (s != sum)
            flag = 0;
    }

    for (int j = 0; j < n; j++) {
        int s = 0;
        for (int i = 0; i < n; i++)
            s += a[i][j];
        if (s != sum)
            flag = 0;
    }

    int d1 = 0, d2 = 0;
    for (int i = 0; i < n; i++) {
        d1 += a[i][i];
        d2 += a[i][n - 1 - i];
    }

    if (d1 != sum || d2 != sum)
        flag = 0;

    if (flag == 1)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
