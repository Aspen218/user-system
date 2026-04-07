#include <bits/stdc++.h>
using namespace std;
vector<vector<string>> result;
bool isvalid(int row,int col,int n,vector<string> chessboard){
	//1.same col
	for(int i=0;i<row;i++){
		if(chessboard[i][col]=='Q'){
			return false;
		}
	}
	//2.45бу
	for(int i=row-1,j=col-1;i>=0&&j>=0;j--,i--){
		if(chessboard[i][j]=='Q'){
			return false;
		}
	} 
	//3.135
	for(int i=row-1,j=col+1;i>=0&&j<n;i--,j++){
		if(chessboard[i][j]=='Q'){
			return false;
		}
	}
	return true;
}
void backtracking(int row,int n,vector<string> chessboard){
	if(row==n){
		result.push_back(chessboard);
		return ;
	}
	for(int col=0;col<n;col++){
		if(isvalid(row,col,n,chessboard)){
			chessboard[row][col]='Q';
			backtracking(row+1,n,chessboard);
			chessboard[row][col]='.';
		}
	}
}
int main(){
	int n;
	cin>>n;
	vector<string> chessboard(n,string(n,'.'));
	backtracking(0,n,chessboard);
	cout<<"[";
	for(int i=0;i<result.size();i++){
		cout<<"[";
		for(int j=0;j<n;j++){
			cout<<"\""<<result[i][j]<<"\"";
			if(j<n-1){
				cout<<",";
			}
		}
		cout<<"]";
		if (i < result.size() - 1) cout << ",";
    }
    cout << "]" << endl;

    return 0;
	}
