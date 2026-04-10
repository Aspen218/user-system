#include <bits/stdc++.h>
const int INF=1e9;
using namespace std;
int main(){
	int n,p;
	cin>>n>>p;
	vector<int> a(n+1,0);
	vector<int> d(n+1,0);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		d[i]=a[i]-a[i-1];
	}
	while(p--){
		int x,y,z; 
		cin>>x>>y>>z;
		d[x]+=z;
		d[y+1]-=z;
	}
	int minn=INF;
	for(int i=1;i<=n;i++){
		a[i]=a[i-1]+d[i];
		minn=min(a[i],minn);
	}
	cout<<minn<<'\n';
	return 0;
}
