#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Nhap xau: ";
    getline(cin, s);

    int pos = s.find("gmail.com");
    if (pos != -1) {
        s.replace(pos, 9, "ctech.edu.vn");
    }

    cout << s;
    return 0;
}

