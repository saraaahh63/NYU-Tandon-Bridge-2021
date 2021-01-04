NOTE: This is a markdown version of [Positional Number Systems.pdf](https://github.com/saraaahh63/NYU-Tandon-Bridge-2021/blob/main/Week%201%20-%20Computer%20Hardware/Module%202/Positional%20Number%20Systems.pdf)

# Positional Number Systems

**Learning Objectives**
* [Understand Positional Number Systems](#introduction)
* Count in different number systems
  * [Base 10](#counting-in-base-10)
  * [Base 5](#counting-in-base-5)
  * [Base 2 / Binary](#counting-in-base-2)
  * [Base 16 / Hexadecimal](#counting-in-base-16)
* [Convert between different bases](#converting-between-bases)
* [Add and Subtract](#addition-and-subtraction)
* [Represent signed numbers](#signed-numbers)

## Introduction

Data in the computer's memory is represented using units that can each be in one of two states (0 or 1)

This is known as **binary code** and can be thought of as a switch where 0 = off and 1 = on.

All the data contained in a computer system is thus represented in binary, meaning text, images, video, etc. are all tranformed into binary numbers.

To understand number systems, you have to understand that digits like 10 or 13 are just symbols that we use to represent a number of objects. **These symbols can mean different things in different systems depending on how that system groups objects together.**

## Counting in Base 10

Let's start with the most common number system, base 10 or the decimal number system, which is what we naturally use to count.

In base 10, there are ten digits we use to represent the quantity of objects.

**0 1 2 3 4 5 6 7 8 9**

After 9, we start to group objects together and repeat digits. **Numbers are written in a positional notation**.

<p align="center">
  <img src="https://raw.githubusercontent.com/saraaahh63/NYU-Tandon-Bridge-2021/main/Week%201%20-%20Computer%20Hardware/images/pnum1.jpeg" width=200>
</p>

Writing 230 is like saying 2 groups of 100, 3 groups of 10, and 0 additional 1s. 100 is just 10 groups of 10 and 0 additional 10s and 1s. 10 is once group of 10 and 0 additional 1s.

Thus, 0-9 are used to represent all the different values you can have in each position.

## Counting in Base 5

We are grouping 5 objects together so the digits we use are **0 1 2 3 4** only. So 5 in base 10 is represented as 10 in base 5.

(10)<sub>10</sub> = (20)<sub>5</sub>

(35)<sub>10</sub> = (120)<sub>5</sub>

(243)<sub>10</sub> = (1433)<sub>5</sub>

## Counting in Base 2

Since out computer system uses binary, meaning it only uses 0s and 1s, it is counting in Base 2.

Digits: **0 1**

Let's countin binary:

0 1 10 11 100 101 110 111 1000 1001 ...

We are grouping much more often, so we get "larger" numbers much faster.

## Counting in Base 16

Base 16, also known as the Hexadecimal number system, is also important to computer systems.

Digits: **0 1 2 3 4 5 6 7 8 9 a b c d e f**

Since we don't begin to group until 16 objects, we borrow symbols from the alphabet to represent the other numbers leading up to 16.

Let's count:

10 11 12 13 14 15 16 17 18 19 1a 1b 1c 1d 1e 1f 20

What comes before 100?

**ff** which represents 15 tens and 15 ones.

## Equivalent Representations

(13)<sub>10</sub> = (15)<sub>8</sub> = (23)<sub>5</sub> = (1101)<sub>2</sub> = (D)<sub>16</sub>

**Representation of number N in base b<sub>1</sub> --> Representation of number N in base b<sub>2</sub>**

## Converting Between Bases

There are two methods of converting between bases. These methods use decimal of base 10 as a stepping stone for conversions.

### N in Base B to N in Decimal

<p align="center">
  <img src="https://raw.githubusercontent.com/saraaahh63/NYU-Tandon-Bridge-2021/main/Week%201%20-%20Computer%20Hardware/images/pnum2.jpeg">
</p>

### N in Decimal to N in Base B

<p align="center">
  <img src="https://raw.githubusercontent.com/saraaahh63/NYU-Tandon-Bridge-2021/main/Week%201%20-%20Computer%20Hardware/images/pnum3.jpeg">
</p>

### Binary to Hexadecimal Conversion

This conversion is unique because we treat digits independently, meaning we translate them individually and not in relation to each other.

To go from binary to hex, we go right to left and group the digits into groups of four. Then, we can use a hex to 4 bit binary chart to translate the groups.

(0011  1011  1001)<sub>2</sub> = (3b9)<sub>16</sub>

Let's breakdown why this works.

<p align="center">
  <img src="https://raw.githubusercontent.com/saraaahh63/NYU-Tandon-Bridge-2021/main/Week%201%20-%20Computer%20Hardware/images/pnum4.jpeg">
</p>

## Addition and Subtraction

<p align="center">
  <img src="https://raw.githubusercontent.com/saraaahh63/NYU-Tandon-Bridge-2021/main/Week%201%20-%20Computer%20Hardware/images/pnum5.jpeg">
</p>

## Signed Numbers

Approaches to representing signed numbers using only 0s and 1s:

### Sign and Magnitude

The first digit represents the sign and the trailing digits or "magnitude" represent the number.

<p align="center">
  <img src="https://raw.githubusercontent.com/saraaahh63/NYU-Tandon-Bridge-2021/main/Week%201%20-%20Computer%20Hardware/images/pnum7.jpeg">
</p>

### Two's Complement

This is the most common representation method.

In a k-bit two's complement representation of a number:
* A positive integer is represented in its (k-1)-bit unsigned binary representation, padded with a 0 to its left.
* The sum of a number and its additive inverse must equal 2<sup>k</sup>

8-bit Two's Complement example:

<p align="center">
  <img src="https://raw.githubusercontent.com/saraaahh63/NYU-Tandon-Bridge-2021/main/Week%201%20-%20Computer%20Hardware/images/pnum6.jpeg">
</p>
