#include<iostream>
using namespace std;
int main(){
	int i,j,row,col;
	cout<<"enter the row";
	cin>>row;
	cout<<"enter the col";
	cin>>col;
	int mat1[row][col];
  cout << "Enter the elements of matrix 1:\n";
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> mat1[i][j];
        }}
        int mat2[row][col];
cout << "Enter the elements of matrix 2:\n";
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            cin >> mat2[i][j];
			}
			}
			int sub[row][col];
for (int i=0; i<row;++i) {
for (int j=0; j<col;++j) {
sub[i][j] = mat1[i][j]-mat2[i][j];
}}

cout << "Resultant Matrix:" << endl;
for (int i = 0; i < row; ++i) {
for (int j = 0; j < col; ++j) {
cout <<sub[i][j] << " ";
}
cout << endl;
}
}
