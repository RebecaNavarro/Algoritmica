#include <iostream>
#include <vector>
#include <string>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;
vector<string> grafo(101); // Cadena de Strings de los arreglos
vector<int> vx = {0,0,1,-1,-1,1,-1,1};
vector<int> vy = {1,-1,0,0,-1,-1,1,1};

 

int xx,yy;

void dfs(int x, int y, char pintar) { // 0
    grafo[x][y]=pintar;
   for(int i=0; i < 8 ;i++) {//
        int nx= x + vx[i];
        int ny= y + vy[i];
        if(nx<=xx && ny<=yy && nx>=0 && ny>=0 && grafo[nx][ny] == '#'){
            dfs(nx,ny, pintar);
        }
   }
}


int main() {
	input;
    while(cin >> xx>>yy){
	int cont = 0;
	for (int i=0; i < xx; i++){//
       cin >> grafo[i];
    }
	
    for (int i=0; i < xx; i++){//
        for(int j=0; j < yy;j++){//
            if (grafo[i][j]=='#'){
                dfs(i,j,'.');
			    cont++;
				
            }
			
        }
    }
		
		cout << cont << endl; 
	}

	return 0;
}