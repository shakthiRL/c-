#include<iostream>
using namespace std;
int main(){
	int res=0,ori,n,dig;
	cout<<"enter the n";
	cin>>n;
	
	ori=n;
	
	while(ori!=0){
	dig=n%10;
	res+=dig*dig*dig;
	ori=ori/10;
	}
	
	if(res==n)
	cout<<"it is not amstrong";
	else
	cout<<"it is amstrong";
}


