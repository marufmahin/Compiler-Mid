///Create a DFA that accepts only those strings over {a, b} where no two consecutive b’s appear

#include <iostream>
#include <string>
using namespace std;

int main(){

    string input;
    cin >> input;
    int state = 0;

    for(int i = 0; i < input.length(); i++){
        char c = input[i];

        if(c != 'a' && c != 'b'){
            cout << "Invalid";
            return 0;
        }

        if(state == 0){
            if(c == 'a') state = 0;
            else state = 1;
        }

        else if(state == 1){
            if(c == 'a') state = 0;
            else state = 2;
        }

        else if(state == 2){
            // already reject state
            state = 2;
        }
    }

    if(state == 2) cout << "Rejected";
    else cout << "Accepted";

    return 0;
}
