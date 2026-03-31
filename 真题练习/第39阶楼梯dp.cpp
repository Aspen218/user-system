#include <bits/stdc++.h>
using namespace std;
int main(){
	vector<vector<int>> dp(40,vector<int> (2,0));
	//dp[i][0]:表示走到第i层台阶时偶数步的方法数
	//dp[i][1]:表示走到第i层台阶时奇数步的方法数 
	dp[1][1]=1;
	dp[2][0]=1;
	dp[2][1]=1; 
	for(int i=3;i<=39;i++){
		dp[i][0]=dp[i-1][1]+dp[i-2][1];
		dp[i][1]=dp[i-1][0]+dp[i-2][0];
	} 
	cout<<dp[39][0];
	return 0;
}
