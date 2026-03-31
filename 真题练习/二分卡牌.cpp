#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,m;
	cin>>n>>m;
	vector<int> a(n,0);
	vector<int> b(n,0);
	for(int i=0;i<n;i++){
		cin>>a[i];
	} 
	for(int i=0;i<n;i++){
		cin>>b[i];
	}
	int l=0;
	int r=n+m;
	int mid=0;
	int ans=0;
	while(l<=r){
		bool check=true; 
		mid=(l+r)/2;
		long long c=0;
		for(int i=0;i<n;i++){
			if(mid-a[i]<=b[i]){
				if(a[i]<=mid){
				c+=mid-a[i];
				}
			}
			else{
				check=false;
				break;
			} 
		}
		if(c>m||check==false){
			r=mid-1;
		}
		else{
			ans=mid;
			l=mid+1;
		}
	}
	cout<<ans;
	return 0;
}
