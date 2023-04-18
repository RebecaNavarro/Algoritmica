#include <bits/stdc++.h>
using namespace std;

int main(){
    int primerValor, segundoValor;
    int casos;
    cin>>casos;
    for(int i=0; i<casos; i++){
        cin>>primerValor>>segundoValor;
        if(primerValor>segundoValor){
            cout<<">"<<'\n';
        } else if(primerValor<segundoValor){
            cout<<"<"<<'\n';
        } else{
            cout<<"="<<'\n';
        }
    }
    
}