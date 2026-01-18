#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x;
    cout << "Nhap x: ";
    cin >> x;

    if (x < 0) {
        cout << "Khong phai so chinh phuong";
    } else {
        int k = sqrt(x);
        if (k * k == x)
            cout << "La so chinh phuong";
        else
            cout << "Khong phai so chinh phuong";
    }

    return 0;
}

