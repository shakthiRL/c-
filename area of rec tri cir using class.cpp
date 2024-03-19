#include <iostream>
using namespace std;
double Area(double l, double w) {
    return l*w;
}
double Area(double r) {
    return 3.14*r*r;
}

int main() {
    double l = 5;
    double w = 3;
    cout << "Area of rec: " << Area(l,w) << endl;
    double r = 2.5;
    cout << "Area of cir: " << Area(r) << endl;

}

