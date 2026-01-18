#include <iostream>
#include <cmath>
using namespace std;

bool laSoChinhPhuong(int x) {
    if (x < 0) return false;
    int k = sqrt(x);
    return k * k == x;
}

int main() {
    int n, a[50][50];

    cout << "Nhap n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    cout << "Cac so chinh phuong tren duong cheo chinh: ";
    for (int i = 0; i < n; i++) {
        if (laSoChinhPhuong(a[i][i]))
            cout << a[i][i] << " ";
    }

    return 0;
}

