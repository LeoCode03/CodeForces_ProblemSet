#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    int op, resul=0;
    while (n--){
        cin>>op;
        if(op==1){
            resul++;
        }
    }
    if(resul>0){
        cout<<"HARD";
    }else{
        cout<<"EASY";
    }
    return 0;
}