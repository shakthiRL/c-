#include<iostream>
#include<cmath>
using namespace std;
int main(){
	float principal,time,rate,num;
	cout<<"enter the principal";
	cin>>principal;
	cout<<"enter the time";
	cin>>time;
	cout<<"enter the rate";
	cin>>rate;
	cout<<"enter the num";
	cin>>num;
	float simpleinterest=(principal*time*rate)/100;
	float compoundinterest=principal * pow((1 + rate), time);

	cout<<"simple interest is: "<<simpleinterest<<endl;
	cout<<"compound interest is: "<<compoundinterest<<endl;
}
