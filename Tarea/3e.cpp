#include <bits/stdc++.h>
using namespace std;

int main(){
    int casos;
    cin>>casos;
    int numPayasos, velPayasos;
    for(int i = 0 ; i<casos ; i++){
        cin>>numPayasos;
        int maximo=0;
        for(int j = 0; j<numPayasos;j++){
            cin>>velPayasos;
            if(maximo<velPayasos){
                maximo=velPayasos;
            }
        }
        cout<<"Case "<<i+1<<": "<<maximo<<'\n';
    }
}