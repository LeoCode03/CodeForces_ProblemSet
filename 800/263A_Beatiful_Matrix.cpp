#define fore(i,b,e)     for(int i = b; i < e; i++)

#include <bits/stdc++.h>
using namespace std;

int main(){
    int posF, posC, resul;
    vector<vector<int>> matriz(5, vector<int>(5));

    fore (i,0,5) {
        fore (j,0,5) {
            cin >> matriz[i][j];
        }
    }

    fore (i,0,5){
        fore (j,0,5) {
            if(matriz[i][j] == 1){
                posF = i+1;
                posC = j+1;
            }
        }
    }
    resul = abs(posF - 3)+abs(posC-3);
    cout<<resul;
    return 0;
}
