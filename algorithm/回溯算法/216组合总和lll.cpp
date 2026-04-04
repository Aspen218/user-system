#include <bits/stdc++.h>
using namespace std;
vector<int> path;
vector<vector<int>> result;
void backtracking(int n,int k,int startindex,int sum){
	if(path.size()==k){
		if(sum==n){
			result.push_back(path);
			return ;
		}
		return ;
	}
	for(int i=startindex;i<=9-(k-path.size())+1;i++){
		path.push_back(i);
		sum+=i;
		backtracking(n,k,i+1,sum);
		path.pop_back();
		sum-=i;
	} 
}
int main(){
	int k,n;
	cin>>k>>n;
	backtracking(n,k,1,0);
	/*for(int i=0;i<result.size();i++){
		for(int j=0;j<result[i].size();j++){
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}*/
	/*for(const auto& row:result){
		for(int i:row){
			cout<<i<<" ";
		}
	cout<<endl;	
	}*/
	cout<<"["; 
	for(int i=0;i<result.size();i++){
		cout<<"[";
		for(int j=0;j<result[i].size();j++){
			cout<<result[i][j];
			if(j<result[i].size()-1){
				cout<<",";
			}
		}
		cout<<"]";
		if(i<result.size()-1){
			cout<<",";
		}
	}
	cout<<"]"<<endl;
	return 0;
}
