#include <bits/stdc++.h>
using namespace std;
int main(){
	int k,count;
	string s;
	char c1,c2;
	count=0;
	cin>>k;
	cin>>s;
	cin>>c1>>c2;
	if(s.size()<k){
		return 0;
	}
	for(int i=0;i<=s.size()-k;i++){
		if(s[i]==c1){
			for(int j=i+k-1;j<=s.size();j++){
				if(s[j]==c2){
					++count;
				}
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
