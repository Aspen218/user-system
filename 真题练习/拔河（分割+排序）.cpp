#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF=1e18;
int main(){
	int n;
	cin>>n;
	vector<ll> a(n+1);
	vector<ll> pre(n+1,0);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		pre[i]=pre[i-1]+a[i];
	}
	ll min_diff=INF;
	for(int mid=1;mid<n;++mid){
		vector<ll> left;
		for(int l=1;l<=mid;++l){
			for(int r=l;r<=mid;++r){
				left.push_back(pre[r]-pre[l-1]);
			}
		}
		vector<ll> right;
		for(int l=mid+1;l<=n;l++){
			for(int r=l;r<=n;r++){
				right.push_back(pre[r]-pre[l-1]); 
			}
		}
		sort(right.begin(),right.end());
		for(ll num:left){
			auto it=lower_bound(right.begin(),right.end(),num);
			if(it!=right.end()){
				min_diff=min(min_diff,abs(num-*it));
			}
			if(it!=right.begin()){
				--it;
				min_diff=min(min_diff,abs(num-*it));
			}
		}
	}
	cout<<min_diff<<endl;
	return 0;
}
