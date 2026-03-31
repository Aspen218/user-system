#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
	LL N;
	cin>>N;
	int l,w,h;
	int count=0;
	for(l=1;l*l*l<=N;l++){
		if(N%l==0){
			int k=N/l;
			//Ç¿ÖÆÁËl<=w<=h
			for(int w=l;w*w<=k;w++){
				if(k%w==0){
					h=k/w;
					if(l==w&&w==h){
						++count;
					}
					if((l==w&&w!=h)||(l==h&&h!=w)||(w==h&&l!=w)){
						count+=3;
					}
					if(l!=w&&l!=h&&w!=h){
						count+=6;
					}
				}
			}
		}
	}
	cout<<count;
	return 0;
}
