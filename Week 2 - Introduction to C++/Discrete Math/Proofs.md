# Discrete Math - Week 2 Part 2

**Learning Objectives:**
* [Understand Proofs](#introduction-to-proofs)
* [Write Proofs](#writing-proofs)

## Introduction to Proofs

**Theorem:** A statement that can be proven to be true.

**Proof:** A series of steps, each of which follows logically from assumptions, or from previously proven statements, whose final step should result in the statement of the theorem being proven.

**Axioms:** Statements assumed to be true that may be used in a proof of a theorem.

A proof may also make use of previously proven theorems.

A proof should read like a verbal argument designed to convince a skeptical listener that an assertion is true.

## Writing Proofs

Before proving a theorem, it is essential to understand exactly what the theorem is saying. Rewriting the statement using precise mathematical language is helpful.

### Universal Statements

Universal statements are an assertion about all elements in a set.

The first step in proving a universal statement is to name a generic object in the domain and prove the statement for that object. Generic means we don't assume anything about the object other than the assumptions that are given in the statement of the theorem. Once the generic object is named, write down everything you know about the object and what needs to be proven.

If the domain of a universal statement is small, it may be easiest to prove the statement by checking each element individually. A proof of this kind is called a **proof by exhaustion**.

**Counterexample:** An assignment of values to variables that shows that a universal statement is false.

### Direct Proofs

Many mathematical theorems take the form of a conditional statement in which a conclusion follows from a set of hypotheses. Theorems of this kind can be expressed as p → c, where p is a proposition that is a conjunction of all the hypotheses and c is the conclusion.

In a **direct proof** of a conditional statement, the hypothesis p is assumed to be true and the conclusion c is proven as a direct result of the assumption.

### Proof by Contrapositive

A **proof by contrapositive** proves a conditional theorem of the form p → c by showing that the contrapositive ¬c → ¬p is true. In other words, ¬c is assumed to be true and ¬p is proven as a result of ¬c.

Consider the statement: 

    For every integer x, if x^2 is even, then x is even

A direct proof assumes that x2 is even, which in mathematical terms means that x2 = 2k, for some integer k. Deriving an expression for x requires taking the square root of both sides, and it is not clear how to reason that is an even integer. Alternatively, a proof by contrapositive assumes that x is odd, which in mathematical terms means that x = 2k + 1, for some integer k. The expression for x can then be plugged into x2 resulting in an expression that is much easier to reason about.

### Proof by Contradiction

A **proof by contradiction** starts by assuming that the theorem is false and then shows that some logical inconsistency arises as a result of this assumption. A proof by contradiction is sometimes called an **indirect proof**. 

### Proof by Cases

A **proof by cases** of a universal statement such as ∀x P(x) breaks the domain for the variable x into different classes and gives a different proof for each class. Every value in the domain must be included in at least one class. 










