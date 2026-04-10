#include <bits/stdc++.h>
using namespace std;
int main(){
	int N;
	cin>>N;
	int ans=0;
	int temp;
	for(int i=0;i<N;i++){
		cin>>temp;
		if(temp!=1){
			ans++;
		}
	}
	cout<<ans<<'\n';
	return 0;
}
