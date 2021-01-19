#include <iostream>
using namespace std;

int main() {
    char lowercase_letter, uppercase_letter;
    int offset;

    cout<<"Please enter a lowercase letter: "<<endl;
    cin>>lowercase_letter;

    offset = (int)(lowercase_letter - 'a');
    uppercase_letter = (char)('A' + offset);

    cout<<"The upper case of "<<lowercase_letter<<" is "<<uppercase_letter<<endl;

    return 0;
}
