#include <bits/stdc++.h>
using namespace std;
const int INF = 0x3f3f3f3f;
int main(){
	string s,t;
	cin>>s>>t;
	int m=s.length();
	int n=t.length();
	vector<vector<int>> dp(m+1,vector<int>(n+1,INF));
	for(int i=0;i<=m;i++){
		dp[i][0]=0;
	}
	for(int i=1;i<=m;i++){
		for(int j=1;j<=n;j++){
			int cost=(s[i-1]==t[j-1])?0:1;
			dp[i][j]=min(dp[i-1][j],dp[i-1][j-1]+cost);
		}
	}
	cout<<dp[m][n];
	return 0;
}
//dp求子序列匹配问题 

