#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a line of code: ";
    getline(cin, s);

    cout << "\nTokens:\n";

    string word = "";


    for (int i = 0; i < (int)s.length(); i++){

    char c = s[i];

        if (c == ' ' || c == '+' || c == '-' || c == '*' || c == '/' || c == '=' || c == ';') {
            if (!word.empty()) {

                if (word == "int" || word == "float" || word == "if" || word == "else")
                    cout << word << " : Keyword\n";
                else if (isdigit(word[0]))
                    cout << word << " : Number\n";
                else
                    cout << word << " : Identifier\n";

                word = "";
            }


           if (c == '+' || c == '-' || c == '*' || c == '/' || c == '=')
                cout << c << " : Operator\n";
            else if (c == ';')
                cout << c << " : Separator\n";
        }
        else {
            word += c;
        }
    }


    if (!word.empty()) {
        if (word == "int" || word == "float" || word == "if" || word == "else")
            cout << word << " Keyword\n";
        else if (isdigit(word[0]))
            cout << word << " : Number\n";
        else
            cout << word << " : Identifier\n";
    }

    return 0;
}
