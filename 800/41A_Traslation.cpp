#include<bits/stdc++.h>
using namespace std;
int main(){
    string be; cin>>be;
    string bi; cin>>bi;

    reverse(bi.begin(), bi.end());

    if(be == bi){
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}