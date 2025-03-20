#include<bits/stdc++.h>
using namespace std;



int main(){
    string year; cin>>year;
    int resul = stoi(year);
    set<int> digits;
    
    while(true){
        resul++;
        year = to_string(resul);
        digits.clear();
        for(char c: year){
            digits.insert(c-'0');
        }
        if(digits.size()==4){
            break;
        }
    }

    cout<<resul;
    return 0;
}