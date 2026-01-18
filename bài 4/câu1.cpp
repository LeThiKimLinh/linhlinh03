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
        if (isalpha(s[i])) {
            dem++;
        }
    }

    cout << "So chu cai = " << dem;
    return 0;
}

