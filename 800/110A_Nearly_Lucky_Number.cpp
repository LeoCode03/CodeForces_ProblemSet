#include<bits/stdc++.h>
using namespace std;
int main(){
    string n; cin>>n;
    int digitos=0;

    for(char c : n){
        if(c == '4' || c =='7'){
            digitos++;
        }
    }
    if(digitos==4 || digitos==7){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    return 0;
}
