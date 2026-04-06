#include <bits/stdc++.h>
using namespace std;
long long doubletoR(double x,int n){
	long long a=static_cast<int>(round(x*pow(2,n)));
	return a;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n;
	double d; 
	cin>>n>>d;
	cout<<doubletoR(d,n)<<endl;
	return 0;
}
