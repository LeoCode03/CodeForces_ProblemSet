#define fore(i,b,e)     for(int i = b; i < e; i++)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k,valor,contador=0; cin>>n>>k;
    vector<int> a(n);

    fore(i,0,n){
        cin>>a[i];
    }

    valor = a[k-1];

    fore(i,0,n){
        if(a[i]>=valor && (a[i] != 0)){
            contador++;
        }
    }

    cout<<contador<<endl;

    return 0;
}