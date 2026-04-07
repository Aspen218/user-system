#include <bits/stdc++.h>
using namespace std;
int main(){
	const int N=51;
	long long dp[N][N]={0};
	for(int i=0;i<N;i++){
		dp[i][0]=1;
		for(int j=1;j<=i;j++){
			dp[i][j]=dp[i-1][j-1]+dp[i-1][j];
		}
	}
	cout<<dp[50][2]-dp[7][2];
	return 0;
}
