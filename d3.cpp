#include <iostream>
#include <string>
using namespace std;

int main() {
    string line;
    bool inBlockComment = false; // /* */ comment flag
    string cleanedCode = "";

    cout << "Enter C/C++ code (type END to finish):" << endl;

    while (true) {
        getline(cin, line);
        if (line == "END") break;

        string processedLine = "";

        for (int i = 0; i < (int)line.length(); i++) {
            char c = line[i];

            // Multi-line comment start
            if (!inBlockComment && c == '/' && i+1 < line.length() && line[i+1] == '*') {
                inBlockComment = true;
                i++; // skip '*'
                continue;
            }

            // Multi-line comment end
            if (inBlockComment && c == '*' && i+1 < line.length() && line[i+1] == '/') {
                inBlockComment = false;
                i++; // skip '/'
                continue;
            }

            if (inBlockComment) continue; // skip comment characters

            // Single-line comment
            if (!inBlockComment && c == '/' && i+1 < line.length() && line[i+1] == '/') {
                break; // ignore rest of line
            }

            // Normal code
            processedLine += c;
        }

        // Add cleaned line to final code
        cleanedCode += processedLine + "\n";
    }

    cout << "\nCleaned Code:\n" << cleanedCode << endl;

    return 0;
}
