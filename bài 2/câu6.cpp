#include <iostream>
#include <cmath>
using namespace std;

bool laSoChinhPhuong(int x) {
    if (x < 0) return false;
    int k = sqrt(x);
    return k * k == x;
}

int main() {
    int n, a[100];
    int tong = 0, dem = 0;

    cout << "Nhap n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (laSoChinhPhuong(a[i])) {
            tong += a[i];
            dem++;
        }
    }

    if (dem == 0)
        cout << "Khong co so chinh phuong";
    else
        cout << "Trung binh cong so chinh phuong = "
             << (double)tong / dem;

    return 0;
}

