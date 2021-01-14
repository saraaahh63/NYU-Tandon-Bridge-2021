/* This program reads two integers from the user and prints their sum */
#include <iostream> // REQUIRED
using namespace std; // REQUIRED

int main() { // REQUIRED
    int num1; // will hold the first input
    int num2; // will hold second input
    int sum; // will hold the sum

    cout<<"Please enter two numbers separated by a space:"<<endl;
    cin>>num1>>num2;

    sum = num1 + num2;

    cout<<num1<<" + "<<num2<<" = "<<sum<<endl;

    return 0; // REQUIRED
}
