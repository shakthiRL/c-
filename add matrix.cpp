#include<iostream>
using namespace std;
int main(){
	int i,j,row,col;
	cout<<"enter the row";
	cin>>row;
	cout<<"enter the col";
	cin>>col;
	
int mat1[row][col];
cout << "Enter mat1\n";
for (int i = 0; i < row; ++i) {
for (int j = 0; j < col; ++j) {
cin >> mat1[i][j];
}}
int mat2[row][col];
cout << "Enter mat2:\n";
for (int i = 0; i < row; ++i) {
for (int j = 0; j < col; ++j) {
cin >> mat2[i][j];
}
}
int add[row][col];
for (int i=0; i<row;++i) {
for (int j=0; j<col;++j) {
add[i][j] = mat1[i][j]+mat2[i][j];
}}

cout << "Resultant Matrix:" << endl;
for (int i = 0; i < row; ++i) {
for (int j = 0; j < col; ++j) {
cout <<add[i][j] << " ";
}
cout << endl;
}
}
