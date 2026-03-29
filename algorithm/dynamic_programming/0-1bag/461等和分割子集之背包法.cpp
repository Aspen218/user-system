#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n;
	cin>>n;
	vector<int> nums(n);
	for(int i=0;i<n;i++){
		cin>>nums[i];
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=nums[i];
	}
	if(sum%2!=0){
		cout<<"false";
		return 0;
	}
	int bw=sum/2;
	vector<int> dp(bw+1,0);
	for(int i=0;i<nums.size();i++){
		for(int j=bw;j>=nums[i];j--){
			dp[j]=max(dp[j],dp[j-nums[i]]+nums[i]);
		}
	}
	if(dp[bw]==bw){
		cout<<"true";
	}
	else{
		cout<<"false";
	}
	return 0;
}
