#include<iostream>
using namespace std;
int main(){
	int evsum=0,oddsum=0,n,i;
	cout<<"enter the n";
	cin>>n;
	for(i=1;i<=n;i++){
		if(i%2==0){
			evsum+=i;
		}
		else{
			oddsum+=i;}
		}

		cout<<oddsum<<endl;
		cout<<evsum<<endl;
					
	}
