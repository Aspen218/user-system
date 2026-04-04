#include <bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n,amount;
	cin>>n>>amount;
	vector<int> coins(n);
	for(int i=0;i<n;i++){
		cin>>coins[i];
	}
	vector<int> dp(amount+1,INF);
	dp[0]=0;
	for(int i=0;i<n;i++){
		for(int j=coins[i];j<=amount;j++){
			dp[j]=min(dp[j],dp[j-coins[i]]+1);
		}
	}
	if(dp[amount]==INF){
		cout<<-1<<endl;
	}
	
	else{
	cout<<dp[amount]<<endl;
	}
	
	return 0;
}
