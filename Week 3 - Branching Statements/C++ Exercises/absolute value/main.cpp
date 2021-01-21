#include <iostream>
using namespace std;

int main() {
    int user_input, abs_value;

    cout<<"Please enter an integer:"<<endl;
    cin>>user_input;

    abs_value = user_input;
    if(user_input < 0)
        abs_value *= -1;

    cout<<"|"<<user_input<<"| = "<<abs_value<<endl;

    return 0;
}
