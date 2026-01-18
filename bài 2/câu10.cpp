#include <iostream>
using namespace std;

int main() {
    int n, a[100];
    int min, max;

    cout << "Nhap n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "Nhap min: ";
    cin >> min;
    cout << "Nhap max: ";
    cin >> max;

    cout << "Cac so nam trong khoang (" << min << ", " << max << "): ";
    for (int i = 0; i < n; i++) {
        if (a[i] > min && a[i] < max) {
            cout << a[i] << " ";
        }
    }

    return 0;
}

