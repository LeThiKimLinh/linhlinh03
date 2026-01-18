#include <iostream>
using namespace std;

int main() {
    int n, a[100];

    cout << "Nhap n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }

    cout << "Phan tu lon nhat (max) = " << max;
    return 0;
}

