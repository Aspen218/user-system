#include <bits/stdc++.h>
using namespace std;
int main(){
	int l;
	cin>>l;
	vector<string> strs(l);
	for(int i=0;i<l;i++){
		cin>>strs[i];
	}
	int m,n;
	cin>>m>>n;
	vector<vector<int>> dp(m+1,vector<int>(n+1,0));
	/*其实还是一维数组的0-1背包问题，只不过现在有m，n两重重量。
	 dp[i][j]:表示容量为i个0和j个1的背包所能装的最多物品数*/ 
	for(string str:strs){
		int x=0;
		int y=0;
		for(char c:str){
			if(c=='0'){
				++x;
			}
			if(c=='1'){
				++y;
			}
		}
		for(int i=m;i>=x;i--){
			for(int j=n;j>=y;j--){
				dp[i][j]=max(dp[i][j],dp[i-x][j-y]+1);
			}
		}
	}
	cout<<dp[m][n];
}
