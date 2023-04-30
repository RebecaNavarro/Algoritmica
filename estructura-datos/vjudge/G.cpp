#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,a,b; //m:popularidad, n: conexiones, a:amigo1, b:amigo2
    cin>>n>>m;
    int v[n+10];
    memset(v,0,sizeof(v));
    for(int i=0;i<m;i++){
        cin>>a>>b;
        v[a]++;
        v[b]++;
    }
    for(int i=1;i<=n;i++){
        cout<<v[i]-(i)<<' ';
    }
    cout<<endl;
}