/*筛选法求组成k个数的最大的公约数的k个数组合*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	vector<int> nums(N);
	int maxn=0;
	for(int i=0;i<N;i++){
		cin>>nums[i];
		maxn=max(maxn,nums[i]);
	}
	sort(nums.begin(),nums.end());
	vector<int> count(maxn+1,0);
	int start=0;
	for(int j=1;j<=maxn;j++){
		for(int i=0;i<N;i++){
			if(nums[i]%j==0){
				count[j]++;
			}
		}
		if(count[j]>=3){
			start=
		}
	}
	for(int i=0;i<N;i++){
		for(int j=1;j<=maxn;j++){
			if(==0){
				count[i]++;
			}
		}
		if(count[i]>=3){
			start=i;
			break;
		}
	}
}  
