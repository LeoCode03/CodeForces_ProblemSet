#include<bits/stdc++.h>
using namespace std;
int main(){
    int k, n, w, resul=0; cin>>k>>n>>w;
    
    for(int i=1; i<=w; i++){
        resul += k*i;
    }

    resul -= n;
    if(resul<0){
        cout<<0;
    }else{
        cout<<resul;
    }
    
    return 0;
}