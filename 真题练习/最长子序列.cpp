#include <bits/stdc++.h>
using namespace std;
/*求最少可删除多少个数，我们可转化为最长子序列的问题
1.dp[j]:末位数字为j的最长序列长度为dp[j],j:0~9
2.递推公式：dp[last]=max(dp[last],dp[first]+1);
3.初始化：全为0
4.for(int j=0;j<=9;j++)
*/int main(){
	int N;
	cin>>N;
	vector<int> a(N);
	for(int i=0;i<N;i++){
		cin>>a[i];
	}
	vector<int> dp(10,0); 
	for(int i=0;i<N;i++){
		string str=to_string(a[i]);
		int first=str[0]-'0';
		int last=str[str.length()-1]-'0';
		dp[last]=max(dp[last],dp[first]+1);
			
	}
	int maxn=0;
	for(int i=0;i<=9;i++){
		maxn=max(maxn,dp[i]);
	}
	cout<<maxn<<endl;
	return 0;
} 
