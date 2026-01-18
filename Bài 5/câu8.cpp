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

    int max = a[0];
    for (int i = 1; i < n; i++)
        if (a[i] > max)
            max = a[i];

    int dem = 0;
    for (int i = 0; i < n; i++)
        if (a[i] != max)
            dem++;

    int* b = new int[dem];
    int j = 0;

    for (int i = 0; i < n; i++)
        if (a[i] != max)
            b[j++] = a[i];

    cout << "Mang sau khi xoa max: ";
    for (int i = 0; i < dem; i++)
        cout << b[i] << " ";

    delete[] a;
    delete[] b;
    return 0;
}

