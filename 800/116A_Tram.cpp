#include<bits/stdc++.h>
using namespace std;
int main(){
    int estaciones; cin>>estaciones;
    int bajan, suben;
    int total=0;
    vector<int> pasajeros;

    while(estaciones--){
        cin>>bajan>>suben;
        total = total - bajan + suben;
        pasajeros.push_back(total);
    }
    int maximo = *max_element(pasajeros.begin(), pasajeros.end());
    cout<<maximo<<endl;
    return 0;
}