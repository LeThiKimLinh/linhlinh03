#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    int tong = 0;

    cout << "Nhap n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        tong += a[i];
    }

    cout << "Tong cac phan tu = " << tong;
    return 0;
}

