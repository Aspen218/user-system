#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,target;
	cin>>n>>target;
	vector<int> nums(n);
	for(int i=0;i<n;i++){
		cin>>nums[i];
	}
	vector<int> dp(target+1,0);
	dp[0]=1;//排列问题需要先遍历背包，后遍历物品
	//组合问题先遍历物品，后遍历背包 
	for(int j=0;j<=target;j++){
		for(int i=0;i<nums.size();i++){
			if(j>=nums[i]){
			dp[j]=dp[j]+dp[j-nums[i]];
		}
	}
	}
	cout<<dp[target]<<endl;
	return 0;
}
