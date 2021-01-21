# Branching Statements

**Learning Objectives**
* [Understand one-way if statements](#one-way-if-statements)
* [Understand multi-way if statements](#multi-way-if-statements-if-else)
* [Understand switch statements](#switch-statements)

## Syntax and Semantics of Branching Statements

### One-Way if Statements
    ...
    ...
    if(condition)
        ... // code executed if condition evaluates to true
    ...
    ...

    ...
    ...
    if(condition) { // {} used for set of instructions
        ...
        ...
        ...
    }
    ...
    ...

**Computing the Absolute Value**

This program reads an integer and prints its absolute value. You can find the code here.

### Multi-Way if Statements (if-else)

    ...
    if(condition)
        ... // code executed if condition evaluates to true
    else 
        ... // code executed if condition evaluates to false
    ...

    ...
    // {} used for set of instructions
    if(condition) {
        ...
        ...
    }
    else {
        ...
        ...
    }
    ...

    ...
    if(condition)
        ...
    else if (condition-2)
        ... 
    else if (condition-3)
        ...
    else
        ...
    ...

#### Using a Sequence of if Statements vs if-else Statements

    if(condition)
        ...
    if(condition)
        ...

    if(condition)
        ...
    else
        ...

Multi-way if statements are preferable over sequential one-way if statements because sequential one-way if statements cannot guarantee the number of instructions that are executed. Zero to more than one body of code could be executed, but in a mutli-way statement only one body of code will be executed.

#### Boolean Interpretation

    int main() {
        int val = 0;

        if(val = 0) // what happens here?
            cout<<"val is 0"<<endl;
        else
            cout<<"val is not 0"<<endl;
        
        return 0;
    }

This program is surprisingly valid in C++. Although the condition attached to the if statement is an assignment ( val = 0) as opposed to a boolean expression (val == 0), the compiler will assign val with the value of zero and then attach a boolean interpretation to the expression. Since val = 0, then the boolean interpretation is false and the else statement will be executed. If the value was a non-zero integer then the boolean interpretation would be true. This mix up is a common mistake in many programs, so watch out for it.

**Determining Parity**

This program reads a positive integer and determines its parity. You can find the code here.

**Classifying a Character**

This program reads a character and classifies it as either a lowercase letter, uppercase letter, digit, or a non alpha-numeric character. You can find the code here.

**Convert 24-hour to 12-hour**

This program reads a time entered in a 24-hour format, and returns the equivalent time in a 12-hour format. You can find the code here.

## Switch Statements

    ...
    switch(numeric-expression){
        case constant:
            ...
            ...
            break;
        case constant:
            ...
            ...
            break;
        .
        .
        default:
            ...
            ...
            break;
    }
    ...

First, numeric-expression is evaluated, then the case it matches is executed. break takes us out of the switch statement. If numeric-expression does not match any of the cases, then default is executed and break takes us out of the switch statement.

**Syntactic Notes**

* The numeric-expression must be of type int, char or bool
* The case labels must be constants (literals or named constants)
* If no case label matches the value of numeric-expression, control branches to the default label (if there is no default label then control passes to the statement following the entire switch statement)
* After a branch is taken, control proceeds sequentially until either break or the end of the switch statement occurs, so break statements are not required but are good practice.

**Computing Value of A Simple Expression**

This program reads a simple mathematical expression and returns its value. You can find the code here.








