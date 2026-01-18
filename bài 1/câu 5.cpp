#include <iostream>
#include <cmath>
using namespace std;

long long giaithua(int n) {
    long long gt = 1;
    for (int i = 1; i <= n; i++) {
        gt *= i;
    }
    return gt;
}

double tinhTong(double x, int n) {
    double s = 1;
    for (int i = 1; i <= n; i++) {
        double term = pow(x, 2 * i) / giaithua(2 * i);
        if (i % 2 == 1)
            s -= term;
        else
            s += term;
    }
    return s;
}

int main() {
    int n;
    double x;
    cout << "Nhap x: ";
    cin >> x;
    cout << "Nhap n: ";
    cin >> n;

    cout << "S = " << tinhTong(x, n);
    return 0;
}

