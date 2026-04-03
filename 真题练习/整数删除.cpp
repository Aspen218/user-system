#include <bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int N,K;
	cin>>N>>K;
	vector<int> nums(N);
	for(int i=0;i<N;i++){
		cin>>nums[i];
	}
	int minm,minp;
	minm=nums[0];
	minp=0;
	for(int i=0;i<K;i++){
		for(int j=0;j<N;j++){
			if(nums[j]<minm){
				minm=nums[j];
				minp=j;
			}
		}
		if(minp==0){
			nums[0]+=nums[1];
			for(int h=2;h<nums.size();h++){
				nums[h-1]=nums[h];
			}
			nums.resize(nums.size()-1); 
		}
		else if(minp==nums.size()){
			nums[minp-1]=nums[minp];
			nums.resize(nums.size()-1); 
		}
		else{
			nums[minp-1]+=nums[minp];
			nums[minp]+=nums[minp+1];
			for(int m=minp+1;m<nums.size();m++){
				nums[m]=nums[m+1];
			}
			nums.resize(nums.size()-1); 
		}
	}
	for(int i=0;i<nums.size();i++){
		cout<<nums[i]<<" ";
	}
	return 0;
}
