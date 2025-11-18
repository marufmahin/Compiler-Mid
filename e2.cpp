#include <iostream>
using namespace std;

int main() {
    string s;
    cout << "Enter a string to check: ";
    cin >> s;

    bool valid = true;

    // Check digits
    for (int i = 0; i < s.length(); i++) {
        if (i == 0 && s[i] == '-') continue; // first char '-' হলে skip
        if (s[i] < '0' || s[i] > '9') {
            valid = false;
            break;
        }
    }

    // Check string is not empty or just '-'
    if (valid && !(s.length() == 1 && s[0] == '-'))
        cout << s << " is a Valid Integer Constant" << endl;
    else
        cout << s << " is an Invalid Integer Constant" << endl;

    return 0;
}

