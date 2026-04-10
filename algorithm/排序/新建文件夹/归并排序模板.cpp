//归并排序
/*1.将数组递归分成两个子数组
2.对这两个数组进行归并排序
3.将这两个数组合并为一个数组*/ 
#include<bits/stdc++.h>
using namespace std;
const int INF=1e6;
int tep[INF],a[INF];
int n;
int ans=0;
void emerge_sort(int l,int r){
	if(l>=r){
		return ;
	}
	int mid=(l+r)>>1;
	emerge_sort(l,mid);
	emerge_sort(mid+1,r);
	int k=0,i=l,j=mid+1;
	while(i<=mid&&j<=r){
		if(a[i]>a[j]){
			tep[k++]=a[j++];
			ans+=mid-i+1;
		}
		else{
			tep[k++]=a[i++];
		}
	}
	while(i<=mid){
		tep[k++]=a[i++];
	}
	while(j<=r){
		tep[k++]=a[j++];
	}
	for(int i=l,j=0;i<=r;i++,j++){
		a[i]=tep[j];} 
}
int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	emerge_sort(1,n);
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<'\n';
	cout<<ans;
	return 0;
}
