#include <iostream>
#include <string>
using namespace std;

bool isKeyword(const string &word) {
    return (word == "int" || word == "float" || word == "double" || word == "char" ||
            word == "long" || word == "short" || word == "if" || word == "else" ||
            word == "for" || word == "while" || word == "return" || word == "void");
}

bool isIdentifier(const string &word) {
    return (!isKeyword(word) && !word.empty() && (isalpha(word[0]) || word[0]=='_'));
}

int main() {
    string line;
    int identifierCount = 0;

    cout << "Enter C/C++ code (type END to finish):" << endl;

    while (true) {
        getline(cin, line);
        if (line == "END") break;

        string word = "";
        for (int i = 0; i < (int)line.length(); i++) {
            char c = line[i];

            if (c == ' ' || c == '+' || c == '-' || c == '*' || c == '/' ||
                c == '=' || c == ';' || c == ',' || c == '(' || c == ')' ||
                c == '{' || c == '}') {

                if (isIdentifier(word)) {
                    identifierCount++;
                }
                word = "";
            } else {
                word += c;
            }
        }

        // last token handle
        if (isIdentifier(word)) {
            identifierCount++;
        }
    }

    cout << "\nTotal identifiers: " << identifierCount << endl;

    return 0;
}
