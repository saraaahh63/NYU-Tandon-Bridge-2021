#include <iostream>
#include <string>
using namespace std;

int main() {
    int hour24, minutes24;
    int hour12, minutes12;
    string period;
    char temp;

    cout<<"Please enter the time in a 24-hour format:"<<endl;
    cin>>hour24>>temp>>minutes24;

    minutes12 = minutes24;

    if(hour24 >= 0 && hour24 <= 11) {
        period = "am";
        if(hour24 == 0)
            hour12 = 12;
        else
            hour12 = hour24;
    }
    else {
        period = "pm";
        if(hour24 == 12)
            hour12 = 12;
        else
            hour12 = hour24 -12;
    }

    cout<<hour24<<temp<<minutes24<<" is "<<hour12<<temp<<minutes12<<" "<<period<<endl;

    return 0;
}
