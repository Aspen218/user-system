#include <bits/stdc++.h>
using namespace std;
/*1.dp[i]:以Nums[i]结尾的最长子序列长度
2.递推方程:dp[i]=max(dp[j]+1,dp[i])
3.初始化均为1
4.遍历顺序：
for(int i=1;i<N;i++){
	for(int j=0;j<i;j++){
*/
int main(){
	int N;
	cin>>N;
	vector<int> nums(N);
	vector<int> dp(N,1);
	for(int &num:nums){
		cin>>num;
	}
	if(N==1){
		cout<<"1"<<endl;
		return 0;
	}
	int result=0;
	for(int i=1;i<N;i++){
		for(int j=0;j<i;j++){
			if(nums[i]>nums[j]){
				dp[i]=max(dp[i],dp[j]+1);
			} 
		}
		result=max(result,dp[i]);
	}
	cout<<result<<endl;
	return 0;
}	 

