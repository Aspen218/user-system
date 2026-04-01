#include <bits/stdc++.h>
using namespace std;
int N,A,B;
int max_val=0;
string str;
void dfs(int id,int res,int A,int B){
	if(id==str.size()){
		max_val=max(max_val,res);
		return ; 
	}
	int num=str[id]-'0';
	int cost1=9-num;
	if(A>=cost1){
		dfs(id+1,res*10+9,A-cost1,B);//9=num+A-cost1 
	}
	else{
		dfs(id+1,res*10+A+num,0,B);
	}
	int cost2=num+1;
	if(B>=cost2){
		dfs(id+1,res*10+9,A,B-cost2);
	}
}
int main(){
	cin>>N>>A>>B;
	str=to_string(N);
	dfs(0,0,A,B);
	cout<<max_val;
	return 0;
}
