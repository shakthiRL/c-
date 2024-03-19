#include <iostream>
using namespace std;
double Area(double l, double w) {
    return l*w;
}
double Area(double r) {
    return 3.14*r*r;
}

int main() {
	double l,w,r;
cout<<"enter the l:";
cin>>l;
cout<<"enter the w:";
cin>>w;
    cout << "Area of rec: " << Area(l,w) << endl;
cout<<"enter the r:";
cin>>r;
cout << "Area of cir: " << Area(r) << endl;

}

