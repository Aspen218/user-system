#include <bits/stdc++.h>
#include <queue>
using namespace std;
typedef long long ll;
typedef pair<ll,int> Node;
const int MAXN=500005;
ll a[MAXN];//记录当前数值 
int L[MAXN];//记录其左节点数值 
int R[MAXN];//记录其右节点数值 
bool del[MAXN];//判断该节点是否被删除 
int main(){
	int N,K;
	cin>>N>>K;
	priority_queue<Node,vector<Node>,greater<Node>> pq;
	//初始化双向链表
	for(int i=1;i<=N;i++) {
		cin>>a[i];
		L[i]=i-1;
		R[i]=i+1;
		if(i==N){
			R[i]=0;
		}
		pq.push({a[i],i});
	}
	int cnt=0;//删除次数
	while(!pq.empty()&&cnt<K){
		Node top=pq.top();//取出小根堆里面最小的元素 
		pq.pop();//在pq中删除该元素
		//拿出该最小元素来处理 
		ll val=top.first;
		int id=top.second;
		if(val!=a[id]||del[id]){
			continue;
		} //检查当前值是不是数组里面的最新值，如果不是，就说明过时了
		/*数组里面的值是怎么更新的，你怎么确定现在拿的这个这个序号上的值
		是不是最新的，push之后有些序号上有两个值吗*/
		//有些序号上现在就有两个值，然后可通过val和最新数组里面的值是否相等来判断 
		int left=L[id];
		int right=R[id];
		//为什么要不等于0(0表示没有这个节点) 
		if(left!=0){
			a[left]+=a[id];
			pq.push({a[left],left}); 
		} 
		
		if(right!=0){
			a[right]+=a[id];
			pq.push({a[right],right});
		}
		if(left!=0){
			R[left]=right;
		}
		if(right!=0){
			L[right]=left;
		} 
		del[id]=true;
		cnt++;
	} 
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
}
