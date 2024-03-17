#include<iostream>
using namespace std;
int main(){
	int oddcount=0,evcount=0,n,i;
	cout<<"enter the n";
	cin>>n;
	for(i=1;i<=n;i++){
		if(i%2==0){
			evcount++;
		}
		else{
			oddcount++;
		}
	}
	cout<<evcount<<endl;
	cout<<oddcount<<endl;
}
