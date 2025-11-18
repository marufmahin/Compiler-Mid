/// Construct an NFA for the regular expression: a(b|c)*

#include <iostream>
using namespace std;

bool check(string s) {


    if (s.length() == 0) return false;


    if (s[0] != 'a') return false;


    for (int i = 1; i < s.length(); i++) {
        if (s[i] != 'b' && s[i] != 'c')
            return false;
    }

    return true;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;

    if (check(s))
        cout << "Accepted\n";
    else
        cout << "Rejected\n";

    return 0;
}

