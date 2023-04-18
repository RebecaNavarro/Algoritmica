#include <bits/stdc++.h>
using namespace std;

int main(){
    int Gold, Silver, Copper;
    cin>>Gold>>Silver>>Copper;
    int draws=Gold*3+Silver*2+Copper*1;
    if(draws>0 && draws<2){
        cout<<"Copper";
    } else if(draws==2){
        cout<<"Estate or Copper";
    } else if(draws==3){
        cout<<"Silver or Estate";
    } else if(draws>3 && draws<=5){
        cout<<"Duchy or Silver";
    } else if(draws>=6 && draws<8){
        cout<<"Gold or Duchy";
    } else if(draws>=8){
        cout<<"Province or Gold";
    }
}