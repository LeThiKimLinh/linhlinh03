#include <iostream>
using namespace std;

int main() {
    int n, a[50][50];
    int tong = 0;

    cout << "Nhap n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            tong += a[i][j];
        }

    cout << "Tong cac phan tu = " << tong;
    return 0;
}

