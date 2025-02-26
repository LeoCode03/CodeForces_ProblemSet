#include <bits/stdc++.h>
using namespace std;

int main() {
    string cad; cin >> cad;
    string resul = ""; 
    for (char c : cad) {
        c = tolower(c);
        if (c != 'a' && c != 'o' && c != 'y' && c != 'e' && c != 'u' && c != 'i') {
            resul += '.';
            resul += c;
        }
    }
    cout << resul;
    return 0;
}
