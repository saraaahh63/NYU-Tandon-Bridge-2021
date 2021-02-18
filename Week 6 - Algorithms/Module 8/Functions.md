# Functions

Function calls are another control flow that can simplify and make code more efficient.

### K-combinations Problem**

Let n and k be two nonnegative integers, such that we define k-combinations as the number of unordered selections of distinct elements from a set of n elements. (n choose k)

Theorem: Let n and k be two nonnegative integers, such that k <= n. The number of k-combinations of a set with n elements equals
    n! / (k!)(n-k)!

Code: 

    int main() {

        int n, k, i, nFact, kFact, n_kFact, k_comb;

        cout<<"Please enter n and k (n >= k):<<endl;
        cin>>n>>k;

        nFact = 1;
        for (i=1; i<=n; i++>) {
            nFact *= i;
        }
        kFact = 1;
        for (i=1; i<=k; i++>) {
            kFact *= i;
        }
        n_kFact = 1;
        for (i=1; i<=n-k; i++>) {
            n_kFact *= i;
        }

        k_comb = nFact / (kFact * n_kFact);

        cout<<n<<" choose "<<k<<" is "<<k_comb<<endl;

        return 0
    }

Code using functions:
    
    // declare expected functions 
    int factorial(int num);
    int kCombinations(int n, int k);

    int main() {

        int n, k, k_comb;

        cout<<"Please enter n and k (n >= k):<<endl;
        cin>>n>>k;


        k_comb = kCombinations(n, k);

        cout<<n<<" choose "<<k<<" is "<<k_comb<<endl;

        return 0
    }

    int kCombinations(int n, int k) {
        int nFact, kFact, n_kFact;

        nFact = factorial(n);
        kFact = factorial(k);
        n_kFact = factorial(n-k);

        return (nFact / (kFact * n_kFact));

    }

    int factorial(int num) {
        int factRes, i;

        factRes = 1;
        for (i=1; i<=num; i++>) {
            factRes *= i;
        }

        return factRes;
    }

### Parameter Passing

**Call-By-Value**
* Syntax: void func(int x)
* When passing by value, the argument is evaluated and its value is passed.

**Call-By-Reference**
* Syntax: void func(int & x)
* When passing by reference, a reference to the argument's position is passed.

        int main() {
            int a = 3, b = 4;

            cout<<a<<" "<<b<<endl;
            swap(a, b);
            cout<<a<<" "<<b<<endl;

            return 0;
        }
        void swap(int& a, int& b) {
            int temp;
            temp = a;
            a = b;
            b = temp;
        }

