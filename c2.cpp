///Convert the regular expression: (ab+b)*a

#include <iostream>
using namespace std;

bool check(string s) {
    int n = s.length();
   if (n == 0) return false;

    if (s[n-1] != 'a') return false;

    for (int i = 0; i < n-1; i++) {

        if (s[i] == 'b') {
            continue;
           // return true;
        }

        if (s[i] == 'a') {
            if (i+1 < n-1 && s[i+1] == 'b') {
                i++;
            } else {
                return false;
            }
        }

        else {
            return false;
        }
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

