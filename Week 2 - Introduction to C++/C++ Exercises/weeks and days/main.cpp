/* This program takes a number of days and returns the number of full weeks and remaining days */

#include <iostream>
using namespace std;

const int DAYS_IN_A_WEEK = 7; // all caps separated by _ is the convention for constants, constants should be defined above main

int main() {
    int days_traveled; // camelCase is the convention for variables but I like snake_case
    int full_weeks, remaining_days;

    cout<<"Please enter the number of days travelled:"<<endl;
    cin>>days_traveled;

    full_weeks = days_traveled / DAYS_IN_A_WEEK;
    remaining_days = days_traveled % DAYS_IN_A_WEEK;

    cout<<days_traveled<<" days are "<<full_weeks<<" weeks and "<<remaining_days<<" days"<<endl;

    return 0;
}
