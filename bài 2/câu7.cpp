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

    cout << "Nhap n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Cac so chinh phuong trong mang: ";
    for (int i = 0; i < n; i++) {
        if (laSoChinhPhuong(a[i])) {
            cout << a[i] << " ";
        }
    }

    return 0;
}

