#include <bits/stdc++.h>
#define input freopen("in.txt", "r", stdin)
#define output freopen("out.txt", "w", stdout)
using namespace std;

int main(){
    int n,arrows=0;
    cin>>n;
    vector<int> v(n+10,0);
    for (int i = 0; i< n; i++){
        int height;
    	cin>>height;
    	v[height]++;
    	if(v[height+1]>0){
        	v[height+1]--;
    	}
    	else{
        	arrows++;
    	}
    }
  cout<<arrows<<endl;
}