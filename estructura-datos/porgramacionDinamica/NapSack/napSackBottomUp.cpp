#include <bits/stdc++.h>
using namespace std;

int knapsack(int capacidad, int pesos[], int valores[], int n) {
    int dp[n+1][capacidad+1];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= capacidad; j++) {
            if (i == 0 || j == 0) {
                dp[i][j] = 0;
            }
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= capacidad; j++) {
            if (pesos[i-1] <= j) {
                dp[i][j] = max(dp[i-1][j], valores[i-1] + dp[i-1][j-pesos[i-1]]);
            } else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    for(int i=0;i<=n;i++){
        for(int j=0;j<=capacidad;j++){
            cout<<dp[i][j]<<' ';
        }
        cout<<endl;
    }
    return dp[n][capacidad];
}

int main() {
    int capacidad = 5;
    int pesos[] = {1, 2, 3};
    int valores[] = {6, 10, 12};
    int n = sizeof(valores)/sizeof(valores[0]);

    int valor_maximo = knapsack(capacidad, pesos, valores, n);
    cout << "El valor máximo que se puede obtener es: " << valor_maximo << endl;

    return 0;
}