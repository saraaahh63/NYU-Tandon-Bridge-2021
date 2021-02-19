# Algorithm Analysis

**Learning Objectives:**
* [Understand Runtime Analysis](#runtime-analysis)
* [Define Order of Growth](#order-of-growth)

## Runtime Analysis

The run time of a program depends on the size of the input. To calcualte the run time, we need to parameterize by the size of the input (using n).

The run time depends on the operators we use, and on the types of data they are applied on. To simplify the analysis, we ignore machine-dependent constants. We count each primitive operation as 1.

We compare the number of primitive operations executed by a process, as a function of its input size.

        T1(n) 5n + 4
        T2(n) 3n + 4
        T3(n) 6√n + 4

**Asymptotic Analysis:** We compare the asymptotic order of the number of primitive operations executed by a process, as a function of its input size.

Rule of thumb to get the order of growth:
* Drop low-order terms
* Ignore leading constants

        T1(n) O(n)
        T2(n) O(n)
        T3(n) O(√n)

T1 and T2 are asymptotically equivalent. T3 is asymptotically better than T1 and T2.

## Order of Growth

Let f(n) and g(n) be two functions mapping positive integers to positive real numbers.

We say that f(n) = Og(n) if there exists positive real constants C1, C2 and a positive integer constant n0 such that C2 * g(n) <= f(n) <= C1 * g(n) for all n >= n0


