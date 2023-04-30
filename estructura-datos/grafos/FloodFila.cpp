#include <bits/stdc++.h> // Para importar todas librerias
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

vector<int> grafo[100];
vector<int> vx(4)= {0,0,1,-1};
vector<int> vy(4)= {1,-1,0,0};

void dfs(int x, int y, char pintar) { // 0
    grafo[x][y]=pintar;
   for(int i=0; i<;i++) {//
        int nx=x+vx[i];
        int ny= y+vy[i];
        if(nx<=x && ny<=y && nx>=0 && ny>=0 &&){
            dfs(nx,ny, pintar);
        }
   }
}

int main(){
    int cont = 0;
    for (int i=0; i<= ; i++){//
        for(int j=0; j<;j++){//
            if (grafo[i][j]='.'){
                dfs(i,j){
                    cont++;
                }
            }
        }
    }
}