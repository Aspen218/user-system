#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,c;//n:物品个数 c:背包容量
	cin>>n>>c;
	vector<int> w(n,0);//每个物品重量初始化为0
	vector<int> v(n,0);//每个物品价值初始化为0
	cout<<"请输入每个物品的重量和价值："<<endl;
	for(int i=0;i<n;i++){
		cin>>w[i]>>v[i];
	} 
	vector<vector<int>> dp(n,vector<int>(c+1,0)); 
	//dp[i][j]表示物品i放在容量为j的背包里面的最大价值
	for(int i=0,j=w[0];j<=c+1;j++) {
		dp[0][j]=v[0];
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<=c+1;j++){
			//放不下的时候： 
			if(j<w[i]){
				dp[i][j]=dp[i-1][j];
			}
			else{
				dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
			}
		}
	}
	cout<<"背包的最大容量为："<<dp[n-1][c];
	return 0; 
}
