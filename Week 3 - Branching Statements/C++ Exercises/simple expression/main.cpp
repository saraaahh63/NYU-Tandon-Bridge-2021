#include <iostream>
using namespace std;

int main() {
    double arg1, arg2;
    double res;
    char op;

    cout<<"Please enter an expression of the form arg1 op arg2"<<endl;
    cin>>arg1>>op>>arg2;

    switch (op) {
        case '+':
            res = arg1 + arg2;
            cout<<res<<endl;
            break;
        case '-':
            res = arg1 - arg2;
            cout<<res<<endl;
            break;
        case '*':
            res = arg1 * arg2;
            cout<<res<<endl;
            break;
        case '/':
            if(arg2 != 0) {
                res = arg1 / arg2;
                cout << res << endl;
            }
            else
                cout<<"Illegal Expression"<<endl;
            break;
        default:
            cout<<"Illegal Expression"<<endl;
            break;
    }

    return 0;
}
