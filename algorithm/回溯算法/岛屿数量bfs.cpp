#include <bits/stdc++.h>
using namespace std;
int dir[4][2]={-1,0,1,0,0,-1,0,1};
void bfs(const vector<vector<int>>& grid,vector<vector<bool>>& visited,int x,int y){
	queue<pair<int,int>> que;
	que.push({x,y});
	visited[x][y]=true;//一加入队列就马上true 
	while(!que.empty()){
	pair<int,int> cur=que.front();
	que.pop();//取出队首元素，不弹出的话会陷入while的死循环 
	int curx=cur.first;
	int cury=cur.second;
	//如果没有遍历队列的话，就只判断了（x,y）周围的四个格子 
	for(int i=0;i<4;i++){
		int nextx=curx+dir[i][0];
		int nexty=cury+dir[i][1];
		if(nextx<0||nextx>=grid.size()||nexty<0||nexty>=grid[0].size()){
			continue;
		}
		if(grid[nextx][nexty]==1&&!visited[nextx][nexty]){
			que.push({nextx,nexty});
			visited[nextx][nexty]=true;//一加入队列就变成true 
			}
		}
	}	
}
int main(){
	int N,M;
	cin>>N>>M;
	int count=0;
	vector<vector<int>> grid(N,vector<int>(M,0));
	vector<vector<bool>> visited(N,vector<bool>(M,false));
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			cin>>grid[i][j];
		}
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			if(grid[i][j]==1&&!visited[i][j]){
				count++;
				bfs(grid,visited,i,j); 
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
