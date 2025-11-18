///2. Construct a DFA that accepts binary strings containing an even number of 1s.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int state = 0;  // 0 = even, 1 = odd

    for(int i = 0; i < s.length(); i++) {
        char c = s[i];

        // invalid check
        if(c != '0' && c != '1') {
            cout << "Invalid input";
            return 0;
        }

        // DFA transition
        if(c == '1')
            state = 1 - state;   // state switch
    }

    // final decision must be after loop
    if(state == 0) cout << "Accepted";
    else cout << "Rejected";

    return 0;
}
