#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Nhap xau: ";
    getline(cin, s);

    stringstream ss(s);
    string word;
    while (ss >> word) {
        cout << word << endl;
    }

    return 0;
}

