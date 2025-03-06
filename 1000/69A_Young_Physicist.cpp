#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    int rx=0,ry=0,rz=0;
    for(int i=0; i<n; i++){
        int x,y,z; cin>>x>>y>>z;
        rx += x;
        ry += y;
        rz += z;
    }
    if(rx==0 && ry==0 && rz==0){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    return 0;
}


