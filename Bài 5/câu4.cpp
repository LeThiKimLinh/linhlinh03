#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap n: ";
    cin >> n;

    int* a = new int[n];

    for (int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    int tong = 0;
    for (int i = 0; i < n; i++)
    {
        tong += a[i];
    }

    cout << "Tong cac phan tu = " << tong;

    delete[] a;
    return 0;
}

