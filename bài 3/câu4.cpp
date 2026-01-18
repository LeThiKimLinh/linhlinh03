#include <iostream>
using namespace std;

int main() {
    int n, k, a[50][50];

    cout << "Nhap n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    cout << "Nhap hang k: ";
    cin >> k;

    int max = a[k][0];
    for (int j = 1; j < n; j++) {
        if (a[k][j] > max)
            max = a[k][j];
    }

    cout << "Phan tu lon nhat cua hang " << k << " = " << max;
    return 0;
}

