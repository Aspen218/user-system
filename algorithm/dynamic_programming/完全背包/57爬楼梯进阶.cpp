#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,m;
	cin>>n>>m;
	vector<int> dp(n+1,0);
	dp[0]=1;
	for(int j=1;j<=n;j++){
		for(int i=1;i<=m&&i<=j;i++){
			dp[j]+=dp[j-i];
		}
	}
	cout<<dp[n]<<endl;
	return 0;
}
