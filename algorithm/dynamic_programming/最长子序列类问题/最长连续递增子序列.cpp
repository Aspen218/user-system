#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	vector<int> nums(N);
	for(int &num:nums){
		cin>>num;
	}
/*	vector<int> dp(N,1);//以数字nums[i]结尾的最长长度
	int result=0;
	for(int i=1;i<N;i++){
		for(int j=0;j<i;j++){
			if(nums[i]>nums[j]){
				dp[i]=max(dp[i],dp[j]+1);
			}
			else{
				dp[i]=1;
				break; 
			}
		}
		result=max(result,dp[i]);
	} 
	cout<<result<<endl;
	return 0;*/\
	int result=0;
	vector<int> dp(N,1);//以下标为i的数字结尾
	for(int i=1;i<N;i++){
		if(nums[i]>nums[i-1]){
			dp[i]=dp[i-1]+1;
		}
		result=max(result,dp[i]);
	} 
	cout<<result<<endl;
	return 0;
}
