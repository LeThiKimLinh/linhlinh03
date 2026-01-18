#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string s, word, maxWord = "";
    cout << "Nhap xau: ";
    getline(cin, s);

    stringstream ss(s);
    while (ss >> word) {
        if (word.length() > maxWord.length()) {
            maxWord = word;
        }
    }

    cout << "Tu dai nhat: " << maxWord;
    return 0;
}

