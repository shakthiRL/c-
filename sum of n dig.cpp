#include<iostream>
using namespace std;
int main(){
	int sum=0,n;
	cout<<"enter the n";
	cin>>n;
	while(n!=0){
		sum=sum+(n%10);
		n=n/10;
	}
		cout<<sum;
}
