#include <iostream>
#include <cmath> // including math library to use M_PI
using namespace std;

int main() {
    double radius, area;

    cout<<"Please enter the radius: "<<endl;
    cin>>radius;

    area = M_PI * (radius * radius);

    cout<<"The area of a circle with the radius "<<radius<<" is "<<area<<endl;

    return 0;
}
