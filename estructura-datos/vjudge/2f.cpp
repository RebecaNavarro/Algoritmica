#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector<string> grafo(101); // Cadena de Strings de los arreglos
vector<int> vx = {0,0,1,-1};
vector<int> vy = {1,-1,0,0};
int xx,yy;

void dfs(int x, int y, char pintar) { // 0
    grafo[x][y]=pintar;
   for(int i=0; i < 4 ;i++) {//
        int nx=x+vx[i];
        int ny= y+vy[i];
        if(nx<=xx && ny<=yy && nx>=0 && ny>=0 && grafo[nx][ny] == '-'){
            dfs(nx,ny, pintar);
        }
   }
}


int main() {
	int cases = 0;
    while(cin >> xx>>yy){
	int cont = 0;
	for (int i=0; i < xx; i++){//
       cin >> grafo[i];
    }
	
    for (int i=0; i < xx; i++){//
        for(int j=0; j < yy;j++){//
            if (grafo[i][j]=='-'){
                dfs(i,j,'.');
			    cont++;				
            }
			
        }
    }
		cases++;
		cout <<"Case " << cases <<": "<< cont << endl; 
	}

	return 0;
}