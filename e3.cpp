#include <iostream>
#include <regex>
using namespace std;

bool isValidEmail(string email) {
    string pattern = R"((\w+)(\.\w+)*@(\w+)(\.\w{3,})+)";
    regex r(pattern);
    return regex_match(email, r);
}

int main() {
    string email;
    cout << "Enter an email to check: ";
    cin >> email;

    if (isValidEmail(email))
        cout << email << " is a Valid Email" << endl;
    else
        cout << email << " is an Invalid Email" << endl;

    return 0;
}
