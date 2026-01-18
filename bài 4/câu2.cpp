#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cout << "Nhap xau: ";
    getline(cin, s);

    int dem = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            dem++;
        }
    }

    cout << "So chu so = " << dem;
    return 0;
}

