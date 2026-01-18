#include <iostream>
using namespace std;

int main() {
    int n, k, a[50][50];
    int dem = 0;

    cout << "Nhap n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    cout << "Nhap cot k: ";
    cin >> k;

    for (int i = 0; i < n; i++) {
        if (a[i][k] < 0)
            dem++;
    }

    cout << "So phan tu am trong cot " << k << " = " << dem;
    return 0;
}

