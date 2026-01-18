#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s, kq = "";
    cout << "Nhap xau: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        kq += s[i];
        if (i < s.length() - 1 &&
            isdigit(s[i]) && isdigit(s[i+1]) &&
            (s[i]-'0') % 2 == 0 &&
            (s[i+1]-'0') % 2 == 0) {
            kq += '-';
        }
    }

    cout << kq;
    return 0;
}

