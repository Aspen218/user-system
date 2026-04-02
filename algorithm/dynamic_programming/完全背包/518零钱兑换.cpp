#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,amount;
	cin>>n>>amount;
	int coins[n]; 
	for(int i=0;i<n;i++){
		cin>>coins[i];
	}
	vector<int> dp(amount+1,0);
	dp[0]=1;
	for(int i=0;i<n;i++){
		for(int j=coins[i];j<=amount;j++){
			dp[j]=dp[j]+dp[j-coins[i]];//选当前的coins[i]+不选当前coins[i] 
	}
	}
	cout<<dp[amount];
	return 0;
}
