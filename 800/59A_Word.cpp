#include<bits/stdc++.h>
using namespace std;

int main(){
    string cad; cin>>cad;
    int minus=0, mayus=0;
    for(char c: cad){
        if(islower(c)){
            minus++;
        }else if(isupper(c)){
            mayus++;
        }
    }
    if(mayus>minus){
        for(char &c : cad){
            c = toupper(c);
        }
    }else{
        for(char &c : cad){
            c = tolower(c);
        }
    }

    cout<<cad;
    return 0;
}