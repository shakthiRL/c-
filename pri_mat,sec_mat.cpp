#include<iostream>
using namespace std;
int main(){
	int mat[100][100];
	int pri_mat=0,sec_mat=0,n,j;
	cout<<"enter the n"<<endl;
	cin>>n;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<"the enter ("<<i<<","<<j<<")"<<endl;
			cin>>mat[i][j];
		}
	}
	

	for(int i=0;i<n;i++){
		pri_mat+=mat[i][i];
		
	}
	

	for(int i=0;i<n;i++){
		sec_mat+=mat[i][n-i-1];
	}
	cout<<"sum of pri_mat:"<<pri_mat<<endl;
	cout<<"sum of sec_mat:"<<sec_mat<<endl;
}
