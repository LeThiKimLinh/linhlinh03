#include <iostream>
using namespace std;

int tinhTong(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += 3 * i;
    }
    return s;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "S = " << tinhTong(n);
    return 0;
}

