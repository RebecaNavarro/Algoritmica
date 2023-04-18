#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    cin>>casos;
    int length, width, height;
    for(int i = 0 ; i<casos ; i++){
        cin>>length>>width>>height;
        if((length<=20)&&(width<=20)&&(height<=20)){
            cout<<"Case "<<i+1<<": good"<<'\n';
        } else{
            cout<<"Case "<<i+1<<": bad"<<'\n';
        }
    }
}