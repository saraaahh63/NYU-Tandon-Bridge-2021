#include <iostream>
using namespace std;

int main() {
    int input, num, count_digits, sum_digits, current_digit;

    cout<<"Please enter a positive integer:"<<endl;
    cin>>input;

    num = input;

    sum_digits = 0;
    count_digits = 0;

    while(num > 0) {
        current_digit = num % 10;
        count_digits++;
        sum_digits += current_digit;

        num = num / 10;
    }

    cout<<input<<" has "<<count_digits<<" digits";
    cout<<" and their sum is "<<sum_digits<<endl;

    return 0;
}
