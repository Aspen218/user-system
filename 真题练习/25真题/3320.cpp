#include <bits/stdc++.h>
using namespace std;
void solve(){
	int a,b,c;
	int n;
	cin>>a>>b>>c>>n; 
	for(int i=0;i<n;i++){
		int A=(b+c)>>1;
		int B=(a+c)>>1;
		int C=(a+b)>>1;
		if(A==a&&B==b&&C==c){
			break;
		}
	}
	cout<<a<<" "<<b<<" "<<c<<'\n';
}
int main(){
	int T;
	cin>>T;
	while(T--){
		solve();
	}
	return 0;
}
