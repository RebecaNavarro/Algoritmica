#include <bits/stdc++.h> 

using namespace std;

int precio []={50,20,80,45};

int valor[]={80,10,100,150};

int cash = 100;
int n = 4;

int f(int presupuesto, int index){
    if(presupuesto<0 || index>=n){
        return 0;
    } 
    int maxi = f(presupuesto, index +1);
    if(presupuesto-precio[index]>=0){
        maxi = max(valor[index]+ f(presupuesto-precio[index], index +1),maxi);
    }
    return maxi;
}

int main(){
    cout<<f(cash,0)<<endl;
    return 0;
}