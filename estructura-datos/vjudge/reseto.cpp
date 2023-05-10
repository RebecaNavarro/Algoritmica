#include <bits/stdc++.h> 
#include <iostream>
#include <vector>

using namespace std;

int limite, contador; // n es hasta que numero contar y k sacar el k de esa n lista 
int tachados = 0; 
int cont =0;

int main() {
 //   cout<<"limite y hasta donde contar:";
    cin >>limite >> contador;
    vector<bool> primos(limite+1, true); // vector para ver si es T es primo 
    primos[0] = false; // el 0 y 1 no son primos
    primos[1] = false;
    for(int i = 2; i <= limite; i++) {
        if(primos[i]!=0) { // si en el vector primos dice False
            for(int j = i; j <= limite; j+=i) { // si es primo hay que tachar a sus multiplos
                if(primos[j]!=0) { // si ya es false ya no se hace nada
                    tachados=j;
                    primos[j] = 0; // incluyendo al primo
                    cont++;
                    if(cont == contador) { // termina el tachado y mostramos el último valor tachado
                        printf("%d\n", tachados);
                        return 0;
                    }
                }    
            }
        }
    }
}