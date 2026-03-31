#include <bits/stdc++.h>
using namespace std;
int ans;
void dfs(int step,int n){
	if(n>39){
		return ;
	}
	if(step%2==0&&n==39){
		ans++;
		return;
	}
	dfs(step+1,n+1);
	dfs(step+1,n+2);
}
int main(){
	dfs(0,0);
	cout<<ans;
	return 0;
}
