#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin>>n;
	vector<int> nums(n,0);
	for(int i=0;i<n;i++){
		cin>>nums[i];
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=nums[i];
	}
	int target;
	cin>>target;
	if((target+sum)%2!=0){
		cout<<"0";
		return 0;
	}
	int bw=(target+sum)/2;
	vector<int> dp(bw+1,0);
	//dp[j]:目标和为j时的方法种数 
	dp[0]=1;//dp[0]=1即是目标和为0的时候一个也不选，就1种 
	for(int i=0;i<n;i++){
		for(int j=bw;j>=nums[i];j--){
			dp[j]=dp[j]+dp[j-nums[i]];
			//递推公式：dp[j]=选数字i的方法数+不选i的方法数 
		}
	}
	cout<<dp[bw];
	return 0;
}
