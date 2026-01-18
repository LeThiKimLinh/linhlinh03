#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cout << "Nhap xau: ";
    getline(cin, s);

    if (s[0] != ' ')
        s[0] = toupper(s[0]);

    for (int i = 1; i < s.length(); i++) {
        if (s[i-1] == ' ' && s[i] != ' ') {
            s[i] = toupper(s[i]);
        }
    }

    cout << s;
    return 0;
}

