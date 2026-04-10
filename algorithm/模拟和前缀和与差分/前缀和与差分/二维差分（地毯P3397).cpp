#include <bits/stdc++.h>
using namespace std;
int n,m;
void insert(vector<vector<int>> &d, int x1,int y1,int x2,int y2){
	d[x1][y1]+=1;
	d[x2+1][y2+1]+=1;
	d[x1][y2+1]-=1;
	d[x2+1][y1]-=1;
}
int main(){
	cin>>n>>m;
	vector<vector<int>> d(n+2,vector<int> (n+2,0));
	while(m--){
		int x1,y1,x2,y2;
		cin>>x1>>y1>>x2>>y2;
		insert(d,x1,y1,x2,y2);
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			d[i][j]+=d[i-1][j]+d[i][j-1]-d[i-1][j-1];
			cout<<d[i][j]<<" ";
		}
		cout<<'\n';
	}
	return 0;
}
