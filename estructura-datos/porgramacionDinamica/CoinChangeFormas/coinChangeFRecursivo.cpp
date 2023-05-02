#include <bits/stdc++.h> 
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int coins[] = {1,3,4,5};
int v = 7;
int n = 4;

int f(int sumaTotal, int index){
    if(sumaTotal==v){
        return 1;
    }
    if(index>=n || sumaTotal>v){
        return 0;
    }
    return f(sumaTotal+coins[index], index)+f(sumaTotal, index+1);
}

int main(){
    cout<<f(0,0)<<endl;
    return 0;
}