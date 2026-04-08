#include <bits/stdc++.h>
using namespace std;
const int INF=1e9;
int main(){
	int n;
	cin>>n;
	vector<int> a(n+1,0);
	vector<int> pre(n+1,0);
	for(int i=1;i<=n;i++){
		cin>>a[i];
		pre[i]=pre[i-1]+a[i];
		
	}
	//1.±éÀú×ó¶ÓÎé
	int sum1=0;
	int sum2=0;
	int minn=INF;
	for(int l1=1;l1<=n;l1++){
		for(int r1=l1;r1<=n;r1++){
			sum1=pre[r1]-pre[l1-1];
			for(int l2=r1+1;l2<=n;l2++){
				for(int r2=l2;r2<=n;r2++){
					sum2=pre[r2]-pre[l2-1];
					minn=min(minn,abs(sum1-sum2));
				}
			}
		}
	} 
	cout<<minn<<endl;
	return 0;
}

