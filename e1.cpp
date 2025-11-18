#include <iostream>
#include <cctype>  // For isalpha, isdigit

using namespace std;

// Function to check if a string is a valid identifier
bool isValidIdentifier(string s) {
    if (s.empty()) return false;  // খালি স্ট্রিং ভ্যালিড নয়

    // প্রথম ক্যারেক্টার চেক করা
    if (!(isalpha(s[0]) || s[0] == '_')) {
        return false;  // প্রথমে letter বা underscore থাকতে হবে
    }

    // বাকি ক্যারেক্টার চেক করা
    for (int i = 1; i < s.length(); i++) {
        if (!(isalnum(s[i]) || s[i] == '_')) {
            return false;  // কেবল letter, digit বা underscore থাকতে পারবে
        }
    }

    return true;
}

int main() {
    string input;
    cout << "Enter a string to check: ";
    cin >> input;

    if (isValidIdentifier(input))
        cout << input << " is a Valid Identifier" << endl;
    else
        cout << input << " is an Invalid Identifier" << endl;

    return 0;
}

