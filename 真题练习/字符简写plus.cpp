#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int k;
	long long coutc1,count;
	coutc1=0;
	count=0;
	string s;
	char c1,c2;
	cin>>k;
	cin>>s;
	cin>>c1>>c2;
	/*一层遍历即可（先遍历找到c2，同时计算c2前面有几个符合条件的c1*/
	if(s.size()<k){
		return 0;
	}
	for(int j=k-1;j<s.size();j++){
		int i=j-k+1;
		if(s[i]==c1){
			++coutc1;
		}
		if(s[j]==c2){
			count+=coutc1;
		}
	} 
	cout<<count<<endl;
	return 0;
	 
} 
