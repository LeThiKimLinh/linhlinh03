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

    cout << "Cac phan tu cua mang: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    delete[] a;
    return 0;
}

