#include<iostream>
using namespace std;
int main(){
	int n1,n2;
	cout<<"ente the n1";
	cin>>n1;
	cout<<"enter the n2";
	cin>>n2;
	
	cout<<"addition:"<<n1+n2<<endl;
	cout<<"sub:"<<n1-n2<<endl;
	cout<<"multi:"<<n1*n2<<endl;
	
	if(n2!=0){
		cout<<"div"<<n1/n2<<endl;
	}
	else{
		cout<<"can not div by 0:"<<endl;
	}
	
	if(n2!=0){
		cout<<"mod:"<<n1%n2<<endl;
	}
	else{
		cout<<"can not div mod"<<endl;
	}
}
