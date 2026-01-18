#include <iostream>
using namespace std;

double tinhTong(double x, int n) {
    double s = 1;
    double p = 1;
    for (int i = 1; i <= n; i++) {
        p *= x;
        s += p;
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

