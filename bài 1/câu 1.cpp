#include <iostream>
using namespace std;

double tinhTong(int n) {
    double s = 0;
    for (int i = 1; i <= n; i++) {
        s += 1.0 / i;
    }
    return s;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "Tong S = " << tinhTong(n);
    return 0;
}

