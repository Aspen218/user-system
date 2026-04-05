#include <bits/stdc++.h>
using namespace std;
int dir[4][2]={-1,0,1,0,0,-1,0,1};
void dfs(const vector<vector<int>>& grid,vector<vector<bool>>& visited,int x,int y){
	//1.ÖÕÖ¹¼ì²éÌõ¼þ
	if(x<0||x>=grid.size()||y<0||y>=grid[0].size()) {
		return ;
	}
	if(grid[x][y]==0||visited[x][y]){
		return ;
	}
		visited[x][y]=true;
	for(int i=0;i<4;i++){
		int nextx=x+dir[i][0];
		int nexty=y+dir[i][1];
		dfs(grid,visited,nextx,nexty);
	}
	/*for(int i=0;i<4;i++){
		int nextx=x+dir[i][0];
		int nexty=y+dir[i][1];
		if(nextx<0||nextx>=grid.size()||nexty<0||nexty>=grid[0].size()){
			continue;
		}
		if(grid[nextx][nexty]==1&&!visited[nextx][nexty]){
			visited[nextx][nexty]=true;
			dfs(grid,visited,nextx,nexty);
		}
	}*/
}
int main(){
	int N,M;
	cin>>N>>M;
	vector<vector<int>> grid(N,vector<int>(M,0));
	vector<vector<bool>> visited(N,vector<bool>(M,false));
	int count=0;
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			cin>>grid[i][j];
		}
	}
	for(int i=0;i<N;i++){
		for(int j=0;j<M;j++){
			if(grid[i][j]==1&&!visited[i][j]){
				count++;
			
				dfs(grid,visited,i,j);
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
