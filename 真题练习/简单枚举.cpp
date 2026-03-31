#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int n,sum;
	cin>>n;
	sum=0;
	vector<string> strs(n+1);
	for(int i=1;i<=n;i++){
		strs[i]=to_string(i);
	}
	for(int i=1;i<=n;i++){
		for(char c:strs[i]){
			if(c=='0'||c=='2'||c=='1'||c=='9'){
				sum+=i;
				break;
			}
			
		}
	}
	cout<<sum;
	return 0;
}
