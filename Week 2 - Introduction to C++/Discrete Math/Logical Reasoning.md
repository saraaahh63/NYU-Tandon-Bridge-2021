# Discrete Math - Week 2 Part 1

**Learning Objectives:**
* [Understand Logical Reasoning](#logical-reasoning)
* [Understand Rules of Inference with Propositions](#rules-of-inference-with-propositions)
* [Understand Rules of Inference with Quantifiers](#rules-of-inference-with-quantifiers)


## Logical Reasoning

An **argument** is a sequence of propositions, called **hypotheses**, followed by a final proposition, called the **conclusion**. An argument is **valid** if the conclusion is true whenever the hypotheses are all true, otherwise the argument is **invalid**.

An argument is denoted as:

    p1
    p2
    ...
    pn
    ---
    ∴ c

p1 ... pn are the hypotheses and c is the conclusion. The symbol ∴ reads 'therefore'

The argument is valid whenever the proposition ( p1 ∧ p2 ∧ ... ∧ pn ) → c is a tautology.

According to the commutative law, reordering the hypotheses does not change whether an argument is valid or not. Therefore two arguments are considered to be the same even if the hypotheses appear in a different order.

In order to use a truth table to establish the validity of an argument, a truth table is constructed for all the hypotheses and the conclusion. Each row in which all the hypotheses are true is examined. If the conclusion is true in each of the examined rows, then the argument is valid. If there is any row in which all the hypotheses are true but the conclusion is false, then the argument is invalid. An argument can be shown to be invalid by showing an assignment of truth values to its variables that makes all the hypotheses true and the conclusion false.

### The Form of an Argument

The form of an argument expressed in English is obtained by replacing each individual proposition with a variable. While it is common to express a logical argument in English, the validity of an argument is established by analyzing its form.

    5 is not an even number
    if 5 is an even number, then 7 is an even number.
    --------------------------------------
    ∴ 7 is not an even number

Although the hypotheses and conclusion are all true in the example above. When expressed in logic, the argument is invalid because of its form.

    ¬p
    p → q
    ------
    ∴ ¬q 

In a valid argument, the conclusion must follow from the hypotheses for every possible combination of truth values for the individual propositions.

## Rules of Inference with Propositions

Some arguments can be shown to be valid by applying rules that are themselves arguments that have already been shown to be valid. The laws of propositional logic can also be used in establishing the validity of an argument. 

![img](https://raw.githubusercontent.com/saraaahh63/NYU-Tandon-Bridge-2021/main/Week%202%20-%20Introduction%20to%20C%2B%2B/images/rules.png)

The validity of an argument can be established by applying the rules of inference and laws of propositional logic in a **logical proof**, which is a sequence of steps that consist of a proposition and a justification.

    If it is raining or windy or both, the game will be cancelled.
    The game will not be cancelled.
    ---------------------------------------------------------------
    It is not windy.

Let's prove the validity of the argument above.

    w: It is windy
    r: It is raining
    c: The game will be cancelled

Replacing English phrases with variable names results in the following argument form:

    (r ∨ w) → c
    ¬c
    ------------
    ¬w 

Now we can prove that the argument is valid using a logical proof.

|    |             |                     |
|:---|:-----------:|:-------------------:|
| 1. | (r ∨ w) → c | Hypothesis          |
| 2. | ¬c          | Hypothesis          |
| 3. | ¬(r ∨ w)    | Modus Tollens, 1, 2 |
| 4. | ¬r ∧ ¬w     | De Morgan's law, 3  |
| 5. | ¬w ∧ ¬r     | Commutative law, 4  |
| 6. | ¬w          | Simplification, 5   |

## Rules of Inference with Quantifiers

In order to apply the rules of inference to quantified expressions, we need to remove the quantifier by plugging in a value from the domain to replace the variable x. A value that can be plugged in for variable x is called an **element** of the domain of x.

There are two types of named elements used in logical proofs. An **arbitrary** element of a domain has no special properties other than those shared by all the elements of the domain. A **particular** element of the domain may have properties that are not shared by all the elements of the domain.

For example,

    The domain is the set of all employees at a company.
    c is an arbitrary employee of the company.

Thus, c is an arbitrary element.

    The domain is the set of students enrolled for a class.
    Larry is enrolled in the class.

Thus, Larry is a particular element.

The rules **existential instantiation** and **universal instantiation** replace a quantified variable with an element of the domain. The rules **existential generalization** and **universal generalization** replace an element of the domain with a quantified variable. Note that the rules only apply to non-nested quantifiers. Applying the rules of inference to nested quantifiers would require more constraints on which rules could be applied in particular situations. 

![img](https://raw.githubusercontent.com/saraaahh63/NYU-Tandon-Bridge-2021/main/Week%202%20-%20Introduction%20to%20C%2B%2B/images/rules2.png)

It is important to define a new particular element with a new name for each use of existential instantiation within the same logical proof in order to avoid a faulty proof that an invalid argument is valid.

