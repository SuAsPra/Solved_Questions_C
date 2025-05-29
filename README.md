# Solved_Questions_C
Questions solved on C language
Question 1
Find the logic behind the given series



Series:

6 28 66 120 190 276....



The numbers in the series should be used to create a Pyramid. The base of the Pyramid will be the widest and will start converging towards the top where there will only be one element. Each successive layer will have one fewer number than the layer below it. The width of the pyramid is specified by the input parameter N., In other words, there will be N numbers on the bottom layer of the pyramid.



The Pyramid construction rules are as follows

1.  The first number in the series should be at the top of the Pyramid

2.  Last N number of the series should be on the bottom-most layer of the Pyramid, with the Nth number being the right-most number of this layer.

3.  Numbers less than 5-digits must be padded with zeroes to maintain the sanctity of a pyramid when printed. Have a look at the examples below to get a pictorial understanding of what this rule actually means.



Note : Use printf("%10.5d",variable_name);

Input format :
The first line of input will contain the number N that corresponds to the width of the bottom-most layer of the Pyramid 

Output format :
The Pyramid constructed out of numbers in the series as per stated construction rules (Each output is separated by 5 spaces)

Code constraints :
0 < N <= 14

Sample test cases :
Input 1 :
3
Output 1 :
     00006
     00028     00066
     00120     00190     00276
     
Question 2
Problem Statement



Agalya is an architecture student who wants to create a program that can generate a unique pattern based on user input. She wants to design a program using the C language that takes an integer value from the user and generates a pattern using numbers and spaces.



Example



Input:

5



Output:

1        1
12      21
123    321
1234  4321
1234554321
Input format :
The input consists of an integer n, representing the number of rows of the pattern.

Output format :
The output displays the required pattern, as shown in the problem statement.



Refer to the sample output for the formatting specifications.

Code constraints :
2 <= n <= 10

Sample test cases :
Input 1 :
5
Output 1 :
1        1
12      21
123    321
1234  4321
1234554321
Fill your code here
C (17)
theme
instruction


Question 3
Problem Statement



You have been given a series that follows a specific pattern. The odd-indexed terms, i.e. the 1st, 3rd, 5th, and so on, form a Fibonacci sequence. The even-indexed terms, i.e. the 2nd, 4th, 6th, and so on, are prime numbers arranged in ascending order. The series begins with the numbers 1, 2, 1, 3, 2, 5, 3, 7, 5, 11, 8, 13, 17, and so on.



Your task is to write a program that can find the nth term in this series. The program should use control flow statements to alternately generate Fibonacci and prime numbers, depending on whether the term's index is odd or even.

Input format :
The input consists of an integer n.

Output format :
The output prints an integer representing the nth term of the given series.



Refer to the sample output for format specifications.

Code constraints :
In the given scenario, the test cases fall under the following constraints:

1 ≤ n ≤ 100

Sample test cases :
Input 1 :
14
Output 1 :
17
Input 2 :
50
Output 2 :
97
Input 3 :
1
Output 3 :
1

Question 4
You and your friend are playing a card game with an ordered deck of N cards, numbered from 1 to N. The cards are arranged such that card N is at the top and card 1 is at the bottom of the deck. You both take turns performing specific operations on the deck until only one card remains. The operations are as follows:

Your turn: You throw away the card on top of the deck.

Friend's turn: Your friend moves the next card on the top of the deck to the bottom of the deck.

These steps are repeated alternately until only one card is left in the deck.

Your task is to determine the number on the final card remaining in the deck after completing all operations.

Input format :
First line: A number T denoting the number of test cases.

Each of the next T lines: A number N denoting the number of cards.

Output format :
For each test case, the output prints the number on the final card that is left in the deck.



Refer to the sample input and output for formatting specifications.

Code constraints :
1<=T<=106

1<=N<=1010

Sample test cases :
Input 1 :
2
5
8
Output 1 :
2
8
Input 2 :
5
2 
3
4
5
8
Output 2 :
2
2
4
2
8

Question 5
Problem Statement



Philip needs a program that reads 10 integers from the user and checks if all the integers are the same. If they are not the same, the program should sort the integers in ascending order and display the sorted array. If all integers are the same, it should simply indicate this. 



Help Philip by writing a program to achieve this functionality.

Input format :
The input consists of an array of 10 integers separated by space.

Output format :
If the numbers are not the same, the output displays "Arranged elements are: " followed by the input array sorted array in ascending order separated by space.

If the numbers are the same, the output displays "All numbers are the same".



Refer to the sample output for the formatting specifications.

Code constraints :
-105 ≤ each element ≤ 105

Sample test cases :
Input 1 :
10 12 13 234 45 34 67 78 76 12
Output 1 :
Arranged elements are: 10 12 12 13 34 45 67 76 78 234 
Input 2 :
12 12 12 12 12 12 12 12 12 12
Output 2 :
All elements are the same
Input 3 :
1 2 -3 -4 5 -6 7 -8 9 10
Output 3 :
Arranged elements are: -8 -6 -4 -3 1 2 5 7 9 10 

Question 6
Problem Statement



In a mathematics class, students are learning about matrices and their properties. The teacher has assigned a task to the students to calculate the sum of each row in a 3x3 matrix.



As a programmer, assist the students in calculating the sum by creating a program.

Input format :
The input consists of the elements of the 3x3 matrix.

Output format :
The output prints the sum of each row of the matrix in each line.



Refer to the sample output for the exact text and format.

Code constraints :
1 ≤ elements ≤ 1000

Sample test cases :
Input 1 :
1 2 3
4 5 6
7 8 9
Output 1 :
Sum of row 0: 6
Sum of row 1: 15
Sum of row 2: 24
Input 2 :
12 23 45
56 78 89
14 25 36
Output 2 :
Sum of row 0: 80
Sum of row 1: 223
Sum of row 2: 75

Question 7

Problem Statement



In a town planning project, Sarah is tasked with analyzing the population distribution in a square region represented by an NxN matrix. She needs to divide the region into four quadrants and calculate the sum of populations in each quadrant. 



Can you write a program to help Sarah find the population sums for the top-left, top-right, bottom-left, and bottom-right quadrants?

Input format :
The first line of input contains an integer T, the number of test cases.

For each test case:

The first line contains an integer N, the dimension of the square matrix.
The next N lines each contain N integers, representing the population distribution in the region.
Output format :
For each test case, print four integers: the sums of the populations in the top-left, top-right, bottom-left, and bottom-right quadrants, respectively.



Refer to the sample output for formatting specifications.

Code constraints :
The given test cases fall under the following constraints:

1 ≤ T ≤ 10

2 ≤ N ≤ 10 (The value of N will be even)

0 ≤ population ≤ 100

Sample test cases :
Input 1 :
2
4
8 4 3 5
1 8 2 1
2 7 3 2
8 8 4 8
2
1 2
9 3
Output 1 :
21 11 25 17
1 2 9 3
Input 2 :
1
8
1 9 6 2 6 8 6 1
4 3 3 4 4 9 9 2
8 3 2 7 8 5 5 3
6 2 1 7 5 5 9 4 
4 2 8 6 9 4 2 5
7 7 4 6 5 8 6 6
2 6 8 4 7 7 5 7
8 7 6 5 4 3 2 1
Output 2 :
68 89 90 81

Question 8

Problem Statement



Manoj wants to explore numbers. The number should be even and also a multiple of 10. Write a program to obtain a number x and check if it is even or not. If even, check whether it is a multiple of 10 or not.



Function Specifications:

void iseven(int x) - Prints whether the input number is even or not.
void ismultiple(int x) - Prints whether the input number is a multiple of 10 or not.
Input format :
The input consists of an integer x.

Output format :
The first line displays "Even" if x is even or "Not even" otherwise.

If x is even, the second line displays "Multiple of 10" if x is a multiple of 10 or "Not a multiple of 10" otherwise.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ x ≤ 106

Sample test cases :
Input 1 :
50
Output 1 :
Even
Multiple of 10
Input 2 :
13
Output 2 :
Not even
Input 3 :
1
Output 3 :
Not even
Input 4 :
1456
Output 4 :
Even
Not a multiple of 10

Question 9

Problem Statement



Zaara is working on her Maths assignment. The assignment is to convert a number to a Roman numeral.



Seven different symbols represent Roman numerals: I, V, X, L, C, D, and M.



Example

Two is written as II a Roman numeral, just two ones added together.
Twelve is written as, XIIwhich is simply X + II.
The number twenty-seven is written as XXVII, which is XX + V + II.


Roman numerals are usually written from largest to smallest from left to right.



However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five, we subtract it, making four.



The same principle applies to the number nine, which is registered as IX.



There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.


Given an integer, convert it to a Roman numeral to help Zaara solve her assignment.

Input format :
The input consists of an integer N.

Output format :
The output prints the corresponding Roman numeral of the given integer.

If the input number is less than or equal to zero, display "Invalid".



Refer to the sample output for formatting specifications.

Code constraints :
N < 106

Sample test cases :
Input 1 :
40
Output 1 :
XL
Input 2 :
1000
Output 2 :
M
Input 3 :
0
Output 3 :
Invalid
Input 4 :
-70
Output 4 :
Invalid
Input 5 :
27
Output 5 :
XXVII

Question 10

Problem Statement



Sharon is fascinated by palindromes and wants to find the length of the longest palindromic substring in a given string. Write a program for Sharon that takes a string as input and outputs the length of the longest palindromic substring.



Example



Input:

bananas

Output: 

5

Explanation:

The longest palindromic substring is 'anana' with a length of 5.

Input format :
The input consists of a string.

Output format :
The output prints the integer, representing the length of the longest palindromic substring.



Refer to the sample output for formatting specifications.

Code constraints :
The string contains lowercase letters with at most 50 characters.

Sample test cases :
Input 1 :
bananas
Output 1 :
5
Input 2 :
acacacab
Output 2 :
7

Question 10

Problem Statement



Rasika is taking a programming class, and her teacher has assigned her a task to write a program that reads an integer n(input must be greater than 1000) and finds the sum of its maximum and minimum digits present in n.



She wants to impress her teacher by writing a program that utilizes pointers and pointer arithmetic. Help her accomplish this task.

Input format :
The input consists of an integer n, representing the number Rasika needs to process.

Output format :
If n is less than or equal to 1000, the output prints "Invalid input".

Otherwise, the output prints an integer which is the sum of the maximum and minimum digits of n.



Refer to the sample output for the formatting specifications.

Code constraints :
n ≤ 109

Sample test cases :
Input 1 :
12354
Output 1 :
6
Input 2 :
108
Output 2 :
Invalid input

