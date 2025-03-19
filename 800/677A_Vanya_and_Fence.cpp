#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h; cin>>n>>h;
    int resul=0;
    while(n--){
        int amigo; cin>>amigo;
        if(amigo>h){
            resul+=2;
        }else{
            resul+=1;
        }
    }
    cout<<resul<<endl;
    return 0;
}