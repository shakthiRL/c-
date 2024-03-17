#include<iostream>
using namespace std;
int main(){

int fact=1,i,n;
cout<<"enter the n";
cin>>n;

if(n<0)
cout<<"error";
else{
	for(i=1;i<=n;i++){
	fact*=i;
}
cout<<fact;
}
}

