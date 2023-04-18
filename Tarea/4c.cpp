#include <bits/stdc++.h>
using namespace std;

int main(){
  int personas, pollo;
  cin>>personas>>pollo;
  if(personas<pollo){
     int sobra=pollo-personas;
     cout<<"Al Dr. le sobraran "<<sobra<<" piezas de pollo";
  }else if(personas>pollo){
      int falta=personas-pollo;
      cout<<"Al Dr. le faltaran "<<falta<<" piezas de pollo";
  }else{
      cout<<"Al Dr. le alcanzará el pollo";
  }
}