#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N; 
	vector<int> nums(N);
	for(int i=0;i<N;i++){
		cin>>nums[i];
	}
	vector<int> dp(10,0);//以数字i结尾的最长子序列 
	for(int i=0;i<N;i++){
		string str=to_string(nums[i]);
		int first=str[0]-'0';
		int last=str[str.length()-1]-'0';
		dp[last]=max(dp[first]+1,dp[last]);
	}
	int res=0;
	for(int i=0;i<=9;i++){
		res=max(res,dp[i]);
	} 
	cout<<N-res<<endl;
	return 0;
}
