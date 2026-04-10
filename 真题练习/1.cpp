#include <bits/stdc++.h>
using namespace std;
int main(){
	int x=233;
	int y=666;
	double r=sqrt(233*233+666*666);
	int ans=round(r+r*asin(666.0/r));
	cout<<ans;
	return 0;
} 
