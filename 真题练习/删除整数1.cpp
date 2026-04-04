#include <bits/stdc++.h>
#include <queue>
using namespace std;
typedef long long ll;
typedef pair<ll,int>Node;
const int MAXN=50005;
ll a[MAXN];
ll L[MAXN];
ll R[MAXN];
bool del[MAXN];
int main(){
	int N,K;
	cin>>N>>K;
	priority_queue<Node,vector<Node>,greater<Node>> pq;
	//初始化双向链表
	for(int i=1;i<=N;i++){
		cin>>a[i];
		L[i]=i-1;
		R[i]=i+1;
		if(i==N){
			R[i]=0;
		}
		pq.push({a[i],i});		
	}
	int cnt=0;
	while(!pq.empty()&&cnt<K){
		Node top=pq.top();
		pq.pop();
		int val=top.first;
		int id=top.second;
		if(val!=a[id]||del[id]){
			continue;
		}
		int left=L[id];
		int right=R[id];
		if(left!=0){
			a[left]+=a[id];
			pq.push({a[left],left});
		}
		if(right!=0){
			a[right]+=a[id];
			pq.push({a[right],right});
		}
	/*	if(left!=0&&right!=0){
		L[right]=left;
		R[left]=right;//id的左边的右边变成id的右边
		del[id]=true; 
		cnt++;
		}*端点未考虑全，现在这个写法会漏掉左端点和右端点*/	
		if(left!=0){
			R[left]=right;
		}
		if(right!=0){
			L[right]=left;
		}
		del[id]=true;
		cnt++;
	}
	
	/*从小根堆里面取值进行处理：
	1.取出最小值 
	2.检查值是否过时
	3.处理左节点
	4.处理右节点
	5.删除该节点*/ 
	bool first=true;
	for(int i=1;i<=N;i++){
		if(!del[i]){
			if(!first){
				cout<<" ";
			}
			cout<<a[i];
			first=false;
		}
	}
	cout<<endl;
	return 0;
	//打印 
}
