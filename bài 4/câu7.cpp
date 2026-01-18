#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s;
    cout << "Nhap xau: ";
    getline(cin, s);

    for (int i = 0; i < s.length(); i++) {
        if (islower(s[i])) s[i] = toupper(s[i]);
        else if (isupper(s[i])) s[i] = tolower(s[i]);
    }

    cout << s;
    return 0;
}

