#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    int dem = 0;

    cout << "Nhap n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < 0)
            dem++;
    }

    cout << "So phan tu am = " << dem;
    return 0;
}

