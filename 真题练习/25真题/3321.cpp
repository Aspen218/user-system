#include <bits/stdc++.h>
using namespace std;
const int INF=1e9;
int main(){
	int N,M;
	cin>>N>>M;
	vector<int> A(N);
	for(int i=0;i<N;i++){
		cin>>A[i];
	}
	sort(A.begin(),A.end());
	int minn=INF;
	for(int i=M-1;i<N;i++){
		minn=min(A[i]*A[i]-A[i-M+1]*A[i-M+1],minn); 
	}
	cout<<minn<<'\n';
	return 0;
}
