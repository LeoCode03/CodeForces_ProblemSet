#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, contador = 0; cin>>n;
    
    while(n--){
        string operador; cin>>operador;
        if((operador == "++X")  || (operador == "X++")){
            contador++;
        }
        if((operador == "--X") || (operador == "X--")){
            contador--;
        }
    }

    cout<<contador;
    return 0;
}