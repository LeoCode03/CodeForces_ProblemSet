#include<bits/stdc++.h>
using namespace std;

int main(){
    string sumas; cin>>sumas;
    multiset<int> sumOrd;

    for(char num : sumas){
        if(isdigit(num)){
            sumOrd.insert(num - '0');
        }
    }
    auto i = sumOrd.begin();
    while(i != sumOrd.end()){
        cout<<*i;
        i++;
        if (i != sumOrd.end()) {
            cout << "+";
        }
    }
    return 0;
}