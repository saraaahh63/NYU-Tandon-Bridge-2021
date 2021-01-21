#include <iostream>
using namespace std;

int main() {
    char user_ch;

    cout<<"Please enter a character:"<<endl;
    cin>>user_ch;

    if(user_ch >= 'a' && user_ch <= 'z')
        cout<<user_ch<<" is a lowercase letter"<<endl;
    else if(user_ch >= 'A' && user_ch <= 'Z')
        cout<<user_ch<<" is an uppercase letter"<<endl;
    else if(user_ch >= '0' && user_ch <= '9')
        cout<<user_ch<<" is a digit"<<endl;
    else
        cout<<user_ch<<" is not an alpha-numeric character"<<endl;

    return 0;
}
