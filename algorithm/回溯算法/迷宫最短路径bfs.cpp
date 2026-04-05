#include <bits/stdc++.h>
using namespace std;
int dir[4][2]={-1,0,1,0,0,-1,0,1};
int N,M;
int bfs(const vector<vector<int>>& grid,int x,int y,int endX,int endY){
	if (x == endX && y == endY) return 0;
	queue<pair<int,int>> que;
	que.push({x,y});
	vector<vector<int>> dist(N,vector<int>(M,-1));//其实dist[i][j]==-1也意味着 没有访问过该点 
	dist[x][y]=0;
	while(!que.empty()){
		pair<int,int> cur=que.front();
		que.pop();
		int curx=cur.first;
		int cury=cur.second;
		for(int i=0;i<4;i++){
			int nextx=curx+dir[i][0];
			int nexty=cury+dir[i][1];
			if(nextx<0||nextx>=grid.size()||nexty<0||nexty>=grid[0].size()){
				continue;
			}
			if(dist[nextx][nexty]==-1&&grid[nextx][nexty]==1){
				dist[nextx][nexty]=dist[curx][cury]+1;
				if(nextx==endX&&nexty==endY){
				return dist[nextx][nexty];
				}
				que.push({nextx,nexty});//把新点入队 
			}
		
		}
	}
	return -1;
}
int main(){
	cin>>N>>M;
	vector<vector<int>> grid(N,vector<int>(M,0));
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			cin>>grid[i][j];
		}
	}
	int startX,startY,endX,endY;
	cin>>startX>>startY>>endX>>endY;
	int steps=bfs(grid,startX,startY,endX,endY);
	cout<<steps<<endl;
	return 0;
}
