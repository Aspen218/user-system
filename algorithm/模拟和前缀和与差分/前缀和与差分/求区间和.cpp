/*一维求区间和*/
#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<long long> s(n+1,0);
	for(int i=1;i<=n;i++){
		int temp;
		cin>>temp;
		s[i]=s[i-1]+temp;
	}
	int m;
	cin>>m;
	while(m--){
		int l,r;
		cin>>l>>r;
		cout<<s[r]-s[l-1]<<'\n';
	}
	return 0;
} 
