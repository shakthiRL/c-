#include<iostream>
using namespace std;
int main(){
	int n,i,sum=0;
	cout<<"enter the n";
	cin>>n;
	for(i=1;i<=n/2;i++){
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==n){
		cout<<"it is perfect";
	}
		else{
			cout<<"not perfect";
		
	}
}
