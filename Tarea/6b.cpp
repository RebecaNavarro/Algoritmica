#include <bits/stdc++.h>
using namespace std;

int main(){
    int periodos;
    float quality, years;
    double resultado=0,0;
    cin>>periodos;
    for(int i=0;i<periodos;i++){
        cin>>quality>>years;
        resultado+=(quality*years);
    }   
    cout<<resultado<<'\n';
}  
