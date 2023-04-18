#include <bits/stdc++.h>
using namespace std;

int main(){
    int primerValor, segundoValor;
    int resultado;
    while(scanf("%d %d", &primerValor, &segundoValor)==2){
        resultado=primerValor-segundoValor;
        if(resultado<0){
            resultado=resultado*(-1);
        }
       cout<<resultado<<endl;
    }
}
