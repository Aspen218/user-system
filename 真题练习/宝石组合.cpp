#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> result;
int gcd(int a,int b){
	return b==0?a:gcd(b,a%b);
}
int gcd3(int a,int b,int c){
	return gcd(gcd(a,b),c);
}
vector<int> a;
void backtracking(int N,const vector<int>& nums,int i){
	if(a.size()==3){
		result.push_back(a);
		return ;
	}
	for(int j=i;j<N;j++){
		a.push_back(nums[j]);
		backtracking(N,nums,j+1);
		a.pop_back();
	}
}
int main(){
	int N;
	cin>>N;
	vector<int> nums(N);
	vector<vector<int>> b(1,vector<int>(3,0));
	for(int i=0;i<N;i++){
		cin>>nums[i];
	}
	sort(nums.begin(),nums.end());
	backtracking(N,nums,0);
	int ans=0;
	for(int i=0;i<result.size();i++){
		if(gcd3(result[i][0],result[i][1],result[i][2])>ans){
			ans=max(ans,gcd3(result[i][0],result[i][1],result[i][2]));
			b[0][0]=result[i][0];
			b[0][1]=result[i][1];
			b[0][2]=result[i][2];
		}
	}
	cout<<b[0][0]<<" "<<b[0][1]<<" "<<b[0][2];
	return 0;
}
