#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N,M,C;
	cin>>N>>M>>C;
	vector<vector<long long>> d(M+1,vector<long long> (N+1,0));
	//二维区间前缀和：sum=d[x2][y2]-d[x2][y1-1]-d[x1-1][y2]+d[x1-1][y1-1]
	for(int x=1;x<=N;x++){
		for(int y=1;y<=M;y++){
			int temp; 
			cin>>temp;
			d[x][y]=d[x-1][y]+d[x][y-1]-d[x-1][y-1]+temp;		
			}
	}
	int maxx=0;
	int maxy=0;
	long long sum=0;
	for(int x1=1;x1<=N-C+1;x1++){
			int x2=x1+C;
		for(int y1=1;y1<=M-C+1;y1++){
			int y2=y1+C;
			if(sum<d[x2][y2]-d[x2][y1-1]-d[x1-1][y2]+d[x1-1][y1-1]){
				maxx=x1;
				maxy=y1;
			}
		}
	}
	cout<<maxx<<" "<<maxy<<'\n';
	return 0;
}
