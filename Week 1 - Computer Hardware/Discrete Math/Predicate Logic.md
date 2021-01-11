# Discrete Math - Week 1 Part 2

Logic is the study of formal reasoning.

**Learning Objectives**
* [Understand predicate logic](#predicate-logic)
* [Define Universal Quantifier](#universal-quantifier)
* [Define Existential Quantifier](#existential-quantifier)
* [Understand Quantified Statements](#quantified-statements)
* [Understand De Morgan's Law for Quantified Statements](#de-morgans-law-for-quantified-statements)

## Predicate Logic

A logical statement whose truth value is a function of one or more variables, as in P(x) or Q(x,y), is called a **predicate**. Predicates differ from propositions because the truth value depends on the value of a variable.

**Domain**: The set of all possible values for the variable in a predicate

It may happen that a statement P(x) is true for all values in its domain. However, if the statement contains a variable, then it is still considered to be a predicate and not a proposition.

For example, if P(x) is the statement "x + 1 > 1" and the domain is all positive integers, the statement is true for each value in the domain. However, P(x) is considered to be a predicate and not a proposition because it contains a variable.

### Universal Quantifier

∀x is read "for every x" or  "for all x"

∀x P(x) asserts that P(x) is true for every possible value for x in its domain.

∀x is called the **universal quantifier** and the statement ∀x P(x) is called a **universally quantified statement**. ∀x P(x) is a proposition because it is either true or false. ∀x P(x) is true if and only if P(n) is true for every n in the domain.

Some universally quantified statements can be shown to be true by showing that the predicate holds for an arbitrary element from the domain. An **arbitrary element** means nothing is assumed about the element other than the fact that it is in the domain. However, a single **counterexample** (or element for which the predicate is false) is enough to show that a universally quantified statement is false.

### Existential Quantifier

∃x is read "there exists an x", ∃x P(x) is read "there exists an x, such that P(x)"

The statement ∃x P(x) asserts that P(x) is true for at least one possible value for x in its domain.

The symbol ∃ is an **existential quantifier** and the statement ∃x P(x) is called an **existentially quantified statement**. ∃x P(x) is a proposition because it is either true or false. ∃x P(x) is true if and only if P(n) is true for at least one value n in the domain of variable x. 

Some existentially quantified statements can be shown to be false by showing that the predicate is false for an **arbitrary element** from the domain. However, it is shown to be true if there is at least one element from the domain that is true.

### Quantified Statements

Universally and existentially quantified statements can also be constructed from the same logical operations we learned in [part 1](https://github.com/saraaahh63/NYU-Tandon-Bridge-2021/blob/main/Week%201%20-%20Computer%20Hardware/Discrete%20Math/Propositional%20Logic.md).

Consider the following example.

    P(x): x is prime
    O(x): x is odd

The proposition ∃x (P(x) ∧ ¬O(x)) states that there exists a positive number that is prime and not odd. This proposition is true because of the number x = 2.

The quantifiers ∀ and ∃ are applied before the logical operations (∧, ∨, →, and ↔) used for propositions. This means that the statement ∀x P(x) ∧ Q(x) is equivalent to (∀x P(x)) ∧ Q(x)

A variable x in the predicate P(x) is called a **free variable** because the variable is free to take on any value in the domain. The variable x in the statement ∀x P(x) is a **bound variable** because the variable is bound to a quantifier. **A statement with no free variables is a proposition because the statement's truth value can be determined.**

### De Morgan's Law for Quantified Statements

The negation operation can be applied to a quantified statement, such as ¬∀x F(x). If the domain for the variable x is the set of all birds and the predicate F(x) is "x can fly", then the statement ¬∀x F(x) is equivalent to:

    "Not every bird can fly."

which is logically equivalent to the statement:

    "There exists a bird that cannot fly."

The equivalence of the previous two statements is an example of De Morgan's law for quantified statements, which is formally stated as ¬∀x F(x) ≡ ∃x ¬F(x).

**De Morgan's law for universally quantified statements is the same as De Morgan's law for propositions**:

    ¬∃x P(x) ≡ ∀x ¬P(x)

    ¬∀x P(x) ≡ ∃x ¬P(x)


