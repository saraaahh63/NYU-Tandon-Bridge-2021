# Arrays

**Basic Properties of Arrays**
* The elements are stored continuosly in memory
* All of the elements in an array are of the same type
* The elements are accessed using a 0-based index system
* (address of arr [i]) = (address arr begins) + i * (size of each element in arr)

The compiler does not care if you assign elements outside of the scope of the array, it will still use the formula above and change the value stored outside of the array at the specified location in memory.

**Syntactic Notes**

    int main() {
        int arr [5];
    }
    
Array's physical size must be a constant, and must be given at declaration.


**Computing the Average (Revisited)**

Write a program that reads grades of students in a class, and prints the average. This time also print grades that are above the average.

        int main() {
            int numOfStudents;
            int gradesList[60];
            int currGrade;
            int ind, sum;
            double average;

            cout<<"Enter number of students (no more than 60)"<<endl;
            cin>>numOfStudents;

            cout<<"Enter grades separated by a space"<<endl;
            for (ind=0; ind < numOfStudents; ind++) {
                cin>>currGrade;
                gradesList[ind] = currGrade;

            }

            sum = 0;
            for (ind=0; ind < numOfStudents; ind++) {
                sum += gradesList[ind];
            }

            average = (double) sum / (double) numOfStudents;

            cout<<"average: "<<average<<endl;

            cout<<"The grades above the average are ";
            for (ind=0; ind < numOfStudents; ind++) {
                if (gradesList[ind] > average) {
                    cout<<gradesList[ind]<<' ';
                }
            }
            cout<<endl;

            return 0;

        }

