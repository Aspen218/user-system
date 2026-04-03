#include <bits/stdc++.h>
using namespace std;
const int INF=0x3f3f3f3f;
int main(){
	int N;
	cin>>N;
	vector<int> A(N);
	vector<int> B(N);
	for(int i=0;i<N;i++){
		cin>>A[i]>>B[i];
	}
	int maxv,minv,mini;
	maxv=INF;
	minv=0;
	mini=0;
	for(int i=0;i<N;i++){
		int c1=A[i]/B[i];
		maxv=min(maxv,c1);
	}
	for(int i=0;i<N;i++){
		int c2=A[i]/(B[i]+1);
		mini=max(mini,c2);
	}
	minv=mini+1;
	cout<<minv<<" "<<maxv;
	return 0;
}
