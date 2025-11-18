/// 3. Construct an NFA using Thompson’s Algorithm for: a*|b(a|b)
#include <iostream>
using namespace std;

int main() {
    char s[100];
    while (cin >> s) {
        int i = 0;
        int flag = 0;

        int onlyA = 1;
        while (s[i] != '\0') {
            if (s[i] != 'a') onlyA = 0;
            i++;
        }
        if (onlyA == 1) flag = 1;

        i = 0;
        if (s[0] == 'b' && (s[1] == 'a' || s[1] == 'b') && s[2] == '\0') flag = 1;

        if (flag == 1) cout << "ACCEPT\n";
        else cout << "REJECT\n";
    }
    return 0;
}
