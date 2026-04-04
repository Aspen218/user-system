#include <bits/stdc++.h>
const int INF=0x3f3f3f3f;
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> dp(n+1,INF);
	dp[0]=0;
	for(int i=1;i*i<=n;i++){
		int square=i*i;
		for(int j=square;j<=n;j++){
			dp[j]=min(dp[j],dp[j-square]+1);
		}
	}
	cout<<dp[n]<<endl;
	return 0;
}
