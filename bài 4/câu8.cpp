#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cout << "Nhap xau: ";
    getline(cin, s);

    int tong = 0;
    for (int i = 0; i < s.length(); i++) {
        if (isdigit(s[i])) {
            tong += s[i] - '0';
        }
    }

    cout << "Tong = " << tong;
    return 0;
}

