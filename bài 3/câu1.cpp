#include <iostream>
using namespace std;

int main() {
    int n;
    int a[50][50];

    cout << "Nhap cap n: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    return 0;
}

