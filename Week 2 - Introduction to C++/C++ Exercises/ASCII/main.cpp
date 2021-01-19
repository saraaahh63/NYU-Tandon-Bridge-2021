#include <iostream>
using namespace std;

int main() {
    char input_char;
    int ascii_value;
    cout<<"Please enter a character: "<<endl;
    cin>>input_char;

    ascii_value = (int)input_char; // casting

    cout<<"The ASCII value of "<<input_char<<" is "<<ascii_value<<endl;

    return 0;
}
