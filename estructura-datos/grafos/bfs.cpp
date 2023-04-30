#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

vector<int> grafo[100];
vector<bool> visitados(100);
vector<int> nivel(100);

void bfs(int nodoInicial){
    queue<int> colaNodos;
    colaNodos.push(nodoInicial); //agregamos el nodo inicial
    visitados[nodoInicial]=true; //para marcar como visitados
    nivel[nodoInicial]=0;
    while(!colaNodos.empty){//cola no vacia
        int nodoActual = colaNodos.front(); //vemos al nodo incial
        colaNodos.pop(); //sacamos al nodo incial
        for (int i = 0;i<grafo[nodoActual].size; i++){ //visitamos a sus vecinos 
                int vecino = grafo[nodoActual][i];// numero del vacino
                 if(!visitados[vecino]){ // ver si el vecino no fue visitado
                    colaNodos.push(vecino); // se agregan a sus vecinos a la cola
                    visitados[vecino]=true; //va poniendo 0 o 1 si los visitamos o no
                    nivel[vecino]=nivel[nodoActual]+1; //ver el nivel para enconbtrar el camino     
                }
            }
       
    }
}