#include <iostream>
using namespace std;

int main() {
    int n, a[50][50];
    int tong = 0, dem = 0;

    cout << "Nhap n: ";
    cin >> n;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    for (int i = 0; i < n; i++) {
        int x = a[i][n - 1 - i];
        if (x != 0 && 150 % x == 0) {
            tong += x;
            dem++;
        }
    }

    if (dem == 0)
        cout << "Khong co so nao la uoc cua 150 tren duong cheo phu";
    else
        cout << "Trung binh cong = " << (double)tong / dem;

    return 0;
}

