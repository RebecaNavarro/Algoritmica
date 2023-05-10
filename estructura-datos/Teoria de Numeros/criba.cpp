#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void mostrar_criba(vector<int> criba){            //no es util para la complejidad
    cout << endl;
    for (int i = 0; i < criba.size(); i++){
        cout << criba[i] << "\t";
    }
    cout << endl;
}

vector<int> criba_eratostenes(int n){
    vector<int> criba;
    int current_primo;  // numero primo que iremos tomando del vector
    for (int i = 2; i <= n; i++){ // vector con numeros desde 2 hasta n
        criba.push_back(i);
    }
    if (n == 2 || n == 3) {
        return criba;
    }
    vector<int>::iterator it = criba.begin(); // iterador para el vector criba
    current_primo = *it;  // El primer primo es el 2
    do{
        vector<int>::iterator it2 = it + 1;
        for(; it2 <= criba.end(); it2++){
            if(*it2 % current_primo == 0){
                criba.erase(it2);
            }
        }
        it++;
        current_primo = *it;
    } 
    while (pow(current_primo, 2) < n);
    return criba;
}

int main(){
    int n;      // Limite de criba
    vector<int> num_primos;
    cin >> n;
    num_primos = criba_eratostenes(n);
    mostrar_criba(num_primos);
    return 0;
}