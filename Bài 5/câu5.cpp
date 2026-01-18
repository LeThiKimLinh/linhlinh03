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

    int k;
    cout << "Nhap vi tri k can xoa: ";
    cin >> k;

    if (k < 0 || k >= n)
    {
        cout << "Vi tri khong hop le!";
        return 0;
    }

    for (int i = k; i < n - 1; i++)
        a[i] = a[i + 1];

    n--;

    cout << "Mang sau khi xoa: ";
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    delete[] a;
    return 0;
}

