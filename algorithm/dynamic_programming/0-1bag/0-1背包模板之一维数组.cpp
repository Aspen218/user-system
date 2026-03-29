#include <bits/stdc++.h>
using namespace std;
int main(){
	int M,N;
	cin>>M>>N;
	vector<int> w(M,0);
	vector<int> v(M,0);
	for(int i=0;i<M;i++){
		cin>>w[i];
	}
	for(int i=0;i<M;i++){
		cin>>v[i];
	}
	vector<int> dp(N+1,0);
	/*递推公式：dp[j]=max(dp[j],dp[d-w[i]]+v[i]);
	初始化：可全初始化为0
	遍历顺序：先物品，后背包（逆序），不可颠倒*/
	for(int i=0;i<M;i++){
		for(int j=N;j>=w[i];j--){
			dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
		}
	}
	cout<<dp[N];
	return 0;
} 
