#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    string cad; cin>>cad;
    int cont = 0;
    for(int i=0; i<cad.size(); i++){
        if(cad[i] == cad[i+1]){
            cont++;
        }
    }
    cout<<cont;
    return 0;
}