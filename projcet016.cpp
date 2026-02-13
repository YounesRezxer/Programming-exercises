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

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            if (a[i][j] != a[j][i])
                flag = 0;

    if (flag == 1)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}
