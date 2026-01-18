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

    int k, x;
    cout << "Nhap k va x: ";
    cin >> k >> x;

    if (k < 0 || k >= n)
    {
        cout << "Vi tri khong hop le!";
        return 0;
    }

    int* b = new int[n + 1];

    for (int i = 0; i <= k; i++)
        b[i] = a[i];

    b[k + 1] = x;

    for (int i = k + 1; i < n; i++)
        b[i + 1] = a[i];

    cout << "Mang sau khi them: ";
    for (int i = 0; i < n + 1; i++)
        cout << b[i] << " ";

    delete[] a;
    delete[] b;
    return 0;
}

