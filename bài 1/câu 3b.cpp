#include <iostream>
using namespace std;

int tinhTong(int n) {
    int s = 0;
    for (int i = 0; i <= n; i++) {
        s += 2 * i + 1;
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

