# Discrete Math - Week 1 Part 1

Logic is the study of formal reasoning.

**Learning Objectives**
* [Understand propositional logic](#propositional-logic)
* Understand basic logical operations
    * [Conjunction](#the-conjunction-operation)
    * [Disjunction](#the-disjunction-operation)
    * [Negation](#the-negation-operation)
    * [Conditional Statements](#conditional-statements)
    * [Biconditional Statements](#the-biconditional-operation)
* [Understand logical equivalence](#logical-equivalence)
* [Understand De Morgan's Laws](#de-morgans-laws)
* [Understand other laws of propostional logic](#laws-of-propositional-logic)

## Propositional Logic

| Proposition   | Truth Value |
| ------------- |:-------------:| 
| There are an infinite number of prime numbers.     | True |
| The Declaration of Independence was signed on July 4, 1812     | False      |

**Proposition**: A declarative statement that is either true or false

**Truth Value**: Indicates whether the proposition is actually true or false. The truth value can be true, false, unknown, or a matter of opinion. A proposition is still a proposition regardless of the truth value.

**Compound Proposition**: Created by connecting individual propositions with logical operations.

**Logical Operation**: Combines prepositions using a particular composition rule.

### The Conjunction Operation

AND is called the **conjunction operation** and it is denoted by **∧**

    p: The car is blue
    q: The seats are black

**p ∧ q** only resolves to true if both p AND q are true. So the car must be blue and the seats must be black. If the car is blue, but the seats are beige (or the seats are black, but the car is red), then p ∧ q is false. If both propositions are false, then p ∧ q is also false. We can see all the possible truth values of a compound proposition in a truth table.

**Truth Table**: Shows the truth value of a compound proposition for every possible combination of truth values for the variables contained in the compound proposition.

Truth Table for p ∧ q:

| p     q | p ∧ q |
| --------|:-----:| 
| T     T |    T  |
| T     F |    F  |
| F     T |    F  |
| F     F |    F  |

* p ∧ q is true only when both p and q are true.
* p ∧ q is false for all other combinations.

### The Disjunction Operation

OR is called the **disjunction operation** and it is denoted by **v**

    p: The car is blue
    q: The seats are black

**p v q** is true if either proposition is true. So if the car is blue then the seats can be any color, and the truth value will still be true. Similarly, if the seats are black then the car can be any color, and the truth value will still be true. Only if the car is not blue and the seats are not black is the truth value false. We can see this in a truth table.

| p     q | p v q |
| --------|:-----:| 
| T     T |    T  |
| T     F |    T  |
| F     T |    T  |
| F     F |    F  |

* p ∨ q is true when either of p or q is true.
* p ∨ q is false only when p and q are both false.

There is a special kind of OR called the **exclusive OR**, denoted by **⊕**, which works differently. The exclusive OR only evaluates to true if one proposition is true and the other is false. Both propositions cannot be true. For p ⊕ q, if the car is blue with black seats, then p ⊕ q evaluates to false.

### The Negation Operation

NOT is called the **negation operation** and it is denoted by **¬**

The negation operation reverses the truth value of the proposition it is attached to. The negation operation only acts on a single proposition, so its truth table only has two rows for the proposition's two possible truth values.

|    p    |   ¬p  |
| --------|:-----:| 
|    T    |   F   |
|    F    |   T   |

* The truth value of ¬p is the opposite of the truth value of p

### Compound Proposition Examples

    t: The patient took the medication.
    n: The patient had nausea.
    m: The patient had migraines.

The patient had nausea and migraines: n ∧ m

The patient took the medication, but still had migraines: t ∧ m

The patient had nausea or migraines: n v m

The patient did not have migraines: ¬m

Despite the fact that the patient took the medication, the patient had nausea: t ∧ n

There is no way that the patient took the medication: ¬t

### Evaluating Compound Propositions

A compound proposition can be created by using more than one operation. For example, the proposition p ∨ ¬q evaluates to true if p is true or the negation of q (NOT q) is true.

The order of operations in a compound operation matters and can affect the expression's truth value. **In the absence of parentheses, the rule is that negation is applied first, then conjunction, then disjunction.** However, good practice is to use parentheses to specify the order in which the operations are to be performed

When there are multiple ∨ operations or multiple ∧ operations, such as in the compound proposition p ∨ q ∨ r or the compound proposition p ∧ q ∧ r, parentheses are usually omitted because the order in which the operations are applied does not affect the final truth value.

**A truth table for a compound statement will have a row for every possible combination of truth assignments for the statement's variables. If there are n variables, there are 2<sup>n</sup> rows.**

### Conditional Statements

IF ... THEN ... is called a **conditional statement** and is denoted by **→**

p → q is like saying IF p THEN q. The proposition p → q is false if p is true and q is false, otherwise p → q is true.

In p → q, propostion p (or the IF clause) is called the **hypothesis** and proposition q (or the THEN clause) is called the **conclusion**. 

**The only way for a conditional statement to be false is if the hypothesis is true and the conclusion is false. If the hypothesis is false, then the conditional statement is true regardless of the truth value of the conclusion.** This is because the hypothesis being false means the required condition was not met, so there is no "contract" regardless of the conclusion's truth value.

### The Biconditional Operation

IF AND ONLY IF is called the **biconditional operation** and is denoted by ↔

the proposition p ↔ q, means p IF AND ONLY IF q

p ↔ q is true when p and q have the same truth value and is false when p and q have different truth values

Conditional and biconditional operations can be combined with other logical operations, as in (p → q) ∧ r. If parentheses are not used to explicitly indicate the order of operations, **then ∧, ∨, and ¬ should be applied before → or ↔**

### Logical Equivalence

**Tautology**: A compound proposition that is always TRUE regardless of the truth value of individual propositions it contains, like p v ¬p

**Contradiction**: A compound proposition that is always FALSE regardless of the truth value of individual propositions it contains, p ∧ ¬p

To show that a compound proposition is not a tautology, you only need to show a particular set of truth values that make it false. The same is true for a contradiction, you only need to show a particulat set of truth values that make it true.

Two compound propositions are considered **logically equivalent** if they have the same truth value regardless of the truth values of their individual propositions.

For s and r, the notation s ≡ r indicates that r and s are logically equivalent.

### De Morgan's Laws

De Morgan's Law #1:

    ¬(p ∨ q)   ≡   (¬p ∧ ¬q)

NOT p OR q is equivalent to NOT p AND NOT q

Let's consider the following example.

    p: The car is blue
    q: The seats are black

¬(p ∨ q) is like saying it is not true that the car is blue or the seats are black. (¬p ∧ ¬q) is like saying the car is not blue and does not have black seats. They essentially say the same thing.

De Morgan's Law #2:

    ¬(p ∧ q)   ≡   (¬p ∨ ¬q)

NOT p AND q is equivalent to NOT p OR NOT q

This law swaps the roles in the first law. Continuing with the same examples, ¬(p ∧ q) is like saying it is not true that the car is blue and the seats are black. (¬p ∨ ¬q) is like saying the car is not blue or the seats are not black.

### Laws of Propositional Logic

**If two propositions are logically equivalent, then one can be substituted for the other within a more complex proposition. The compound proposition after the substitution is logically equivalent to the compound proposition before the substitution.**

Substituting the proposition for its equivalent is just simplifying the overall expression. It does not change the meaning or the truth value.

For example p → q ≡ ¬p ∨ q. Therefore,

(p ∨ r) ∧ (¬p ∨ q)  ≡  (p ∨ r) ∧ (p → q)

In English, this expression is saying

(p OR r) AND (NOT p or q) is the same as (p OR r) AND (IF p THEN q)

which makes sense if we look at the truth table for p → q and ¬p ∨ q side by side

| p     q | ¬p ∨ q | p → q |
| --------|:------:|:-----:| 
| T     T |    T   |    T  |
| T     F |    F   |    F  |
| F     T |    T   |    T  |
| F     F |    T   |    T  |

If one proposition can be obtained from another by a series of substitutions using equivalent expressions, then the two propositions are logically equivalent.

Below is a list of propositional logic laws that you can substitute by.

![Table of Propositional Logic Laws](https://raw.githubusercontent.com/saraaahh63/NYU-Tandon-Bridge-2021/main/Week%201%20-%20Computer%20Hardware/images/proplaws.png)



