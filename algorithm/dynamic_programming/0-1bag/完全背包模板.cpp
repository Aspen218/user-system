#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr); 
	int n,bw;
	cin>>n>>bw;
	vector<int> w(n);
	vector<int> v(n);
	for(int i=0;i<n;i++){
		cin>>w[i]>>v[i];
	}
	vector<int> dp(bw+1,0);
	for(int i=0;i<n;i++){
		for(int j=w[i];j<=bw;j++){
			dp[j]=max(dp[j],dp[j-w[i]]+v[i]);

		}
	}
	cout<<dp[bw];
	return 0;
}
