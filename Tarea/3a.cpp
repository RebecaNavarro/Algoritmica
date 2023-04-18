#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int main(){
    int casos;
    cin>>casos;
    while(casos--){
        int warriors;
        cin>>warriors;
        int rows=((sqrt((8*warriors)+1))-1)/2;
        cout<<rows<<endl;
    }
}