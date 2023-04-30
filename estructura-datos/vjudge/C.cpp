#include <bits/stdc++.h>
using namespace std;
typedef pair<int,int> ii; 
bool vis[50]; 
// arreglo booleano: se inicializa en false

int main(){
   int dinero, tiempo; //tiempo=paciencia
   cin>>dinero>>tiempo; 
   //pedimos caracteristicas de un cliente
   vector<ii> cliente(dinero); 
   //vector para guardar caracteristicas de cada cliente
   for(ii &v:cliente) 
   //v puede ser tiempo o dinero
    cin>>v.first>>v.second;
    //v.first es el primer elemento del vector cliente
    //v.second '' que ya tenemos almacenados en el vector
    sort(cliente.begin(),cliente.end());
    //de todos los clientes que tengamos, los ordena asc
    int respuesta = 0;
    for(int i=dinero-1; i>=0;i--){
        //
        bool ok=0;
        for (int j=cliente[i].second; j>=0; j--){
            if(!vis[j]){
                ok=vis[j]=1;
                break;
            }
        }
        if(ok) respuesta+=cliente[i].first;
    }
    cout<<respuesta<<endl;
}
