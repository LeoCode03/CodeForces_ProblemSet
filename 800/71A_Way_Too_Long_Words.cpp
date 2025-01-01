#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    string w, resul;

    for(int i=0; i<n; i++){
        cin>>w;
        if(w.size()>10){
            resul = w.front() + to_string(w.size()-2) + w.back();
        }else{
            resul = w;
        }
        cout<<resul<<endl;
    }
    return 0;
}