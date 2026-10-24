#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main() {
    string s;
    cin >> s;

    string dig; //Note - we need to declare it here because if we declare it inside if block end dig disappers;

    for(int i = 0; i < s.size(); i++) {
        if(isdigit(s[i])) {
            dig += s[i]; // we are not adding the digits instead appending
        }
    }

    sort(dig.begin(), dig.end());

    for(int i = 0; i < dig.size(); i++) {
        cout << dig[i];

        if(i != dig.size() - 1) { // agar i ki value last dig hai to "+" nhi print karenge
            cout << "+";
        }
    }

    return 0;
}