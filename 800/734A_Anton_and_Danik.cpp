#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    char win;
    int anton=0, danik=0;

    while(n--){
        cin>>win;
        if(win=='A')anton++;
        if(win=='D')danik++;
    }
    if(anton==danik){
        cout<<"Friendship"<<endl;
    }else if(anton>danik){
        cout<<"Anton"<<endl;
    }else{
        cout<<"Danik"<<endl;
    }

    return 0;
}