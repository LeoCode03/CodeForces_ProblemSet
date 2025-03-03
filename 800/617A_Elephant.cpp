#include <bits/stdc++.h>
using namespace std;

int main() {
    int posX, cont = 0; cin >> posX;
        
    for (int n = 5; n > 0; n--) {
        cont += posX / n;
        posX %= n;
    }

    cout << cont;
    return 0;
}
