#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int plato;
int presupuestoMayor;
int prsupuesto;
int numeroPreseupuestos;
int numeroPlatos;    

int main(){
    cin>>numeroPlatos;
    int platosPrecios[numeroPlatos+2];
    for(int i=0;i<numeroPlatos; i++){
        cin>>plato;
        platosPrecios[i]=plato;
    }
    cin>>numeroPreseupuestos;
    int opcionesPresupuesto[numeroPlatos+2];
    for(int i=0; i<=numeroPreseupuestos; i++){
        cin>>prsupuesto;
        opcionesPresupuesto[i]=prsupuesto;
        if(i=0){
            presupuestoMayor = prsupuesto;
        } else{
            if(presupuestoMayor<prsupuesto){
                presupuestoMayor= prsupuesto;
            }
        }
    }
    int dp[numeroPlatos+2][presupuestoMayor+2];
    memset(dp, -1, sizeof(dp));
    for(int i=1;i<=numeroPlatos; i++){
        for(int j=1; j<=presupuestoMayor; j++){
            dp[i][j]= dp[i-1][j];
            if(j-platosPrecios[i-1]>=0){
                 dp[i][j] += dp[i][j-platosPrecios[i]];
            }
        }
    }
    for(int i=0;i<numeroPlatos; i++){
        for(int j=1; j<= presupuestoMayor; j++){
            cout<<"["<<dp[i][j]<<"]";
            
        }
    }

    for(int i = 0; i < numeroPreseupuestos; i++){
        int caso;
        caso = opcionesPresupuesto[i];
            if(dp[numeroPreseupuestos][casos] == 0){
                cout<<"Impossible";
            }
            if(dp[numeroPreseupuestos][casos]>1){
                cout<<"Ambiguous";
            } 
            if(dp[numeroPreseupuestos][casos]==1){
                cout<<;
            }
    }
   

    return 0;
}