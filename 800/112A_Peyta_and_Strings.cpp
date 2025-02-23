#include<bits/stdc++.h>
using namespace std;

int main(){
    string cadA, cadB; cin >> cadA >> cadB;
    int resul = 0;
    for(char &a : cadA) a = tolower(a);
    
    for(char &b : cadB) b = tolower(b);
    
    if(cadA<cadB){
        resul = -1;
    }else if(cadA>cadB){
        resul = 1;
    }else{
        resul = 0;
    }
    cout<<resul;
    return 0;
}