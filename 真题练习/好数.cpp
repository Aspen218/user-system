#include <bits/stdc++.h>
using namespace std;
bool jiOu(int x){
	if(x%2==0){
		return true;
	}
	return false;
}
bool check(int x){
	for(int i=1;x!=0;i++){
		int a=x%10;
		if(jiOu(i)){
			if(!jiOu(a)){
				return false;
			}
		}
		else{
			if(jiOu(a)){
				return false;
			}
		}
	x=x/10;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int count=0;
	int N;
	cin>>N;
	for(int i=1;i<=N;i++){
		if(check(i)){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}
