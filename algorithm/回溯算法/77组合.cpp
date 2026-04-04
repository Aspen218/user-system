#include <bits/stdc++.h>
using namespace std;
vector<int> path;
vector<vector<int>> result;
void backtracking(int n,int k,int startindex){
	if(path.size()==k){
		result. push_back(path);
		return ;
	}
	for(int i=startindex;i<=n-(k-path.size())+1;i++){
		path.push_back(i);
		backtracking(n,k,i+1);
		path. pop_back();
	}
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,k;
	cin>>n>>k;
	backtracking(n,k,1);
	for(int i=0;i<result.size();i++){
		for(int j=0;j<result[i].size();j++){
		cout<<result[i][j]<<" ";
		}
	cout<<endl;	
	}
	return 0;
}
