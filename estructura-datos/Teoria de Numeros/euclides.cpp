#include <bits/stdc++.h> 
#include <iostream>
#include <vector>

using namespace std;

int main(){
    int a, b;                   //1
    cin>>a>>b;                  //1
    int c = a%b;                //logalogb
    if(c==0){        //todo el if 2
        cout<<b<<endl;
    } 
    while(c!=0){                //1
        a = b;                  //1
        b = c;                  //1
        c = a%b;                //loga v logb
             // El while va a ser 2logn 
             // no estamos comparando una entrada
        if(c==0){     //todo el if 2
            cout<<b<<endl;
        } 
    }
    return 0;
}