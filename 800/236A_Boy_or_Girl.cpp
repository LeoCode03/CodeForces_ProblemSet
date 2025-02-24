#include<bits/stdc++.h>
using namespace std;

int main(){
    string user; cin>>user;
    set<char> nombre;
    string resul = " ";
    for(char c : user){
        nombre.insert(c);
    }
    if(nombre.size()%2 ==0){
        resul = "CHAT WITH HER!";
    }else{
        resul = "IGNORE HIM!";
    }
    cout<<resul;

    return 0;
}