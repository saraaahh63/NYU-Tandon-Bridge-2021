#include <iostream>
using namespace std;

int main() {
    // For Loop:
/*    int num_of_students, count, curr, sum;
    double average;

    cout<<"Please enter the number of students in the class:"<<endl;
    cin>>num_of_students;

    cout<<"Please enter grades (separated by a space):"<<endl;

    sum = 0;
    for (count=1; count <= num_of_students; count++) {
        cin>>curr;
        sum += curr;
    }

    average = (double)sum / (double)num_of_students;*/

    // While Loop:
    bool is_end_of_input;
    int sum, num_of_students, curr;
    double average;

    cout<<"Please enter grades separated by a space, end entry with -1:"<<endl;

    sum = 0;
    num_of_students = 0;

    is_end_of_input = false;
    while (is_end_of_input == false) {
        cin>>curr;
        if (curr == -1) {
            is_end_of_input = true;
        }
        else {
            sum += curr;
            num_of_students++;
        }
    }

    average = (double)sum / (double) num_of_students;

    cout<<"The class average is "<<average<<endl;

    return 0;
}
