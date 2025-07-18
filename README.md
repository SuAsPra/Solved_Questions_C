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

Question 11

Problem Statement



Meet Professor Henry, a brilliant mathematician who loves solving brain teasers. One day, he stumbles upon an intriguing problem - finding the sum of the diagonals in a 3D matrix. He decides to write a program to solve it using pointers and multi-dimensional concepts but realizes that the task is more challenging than he thought. 



Therefore, assist him in writing a program that calculates the sum of the diagonals in a 3D matrix.

Input format :
The first line of the input consists of three space-separated integers: rows, columns, and height representing the dimensions of the 3D matrix.

The next lines of the input consist of integers representing the elements of the 3D matrix.

Output format :
The output displays a single integer representing the sum of the main diagonal elements in the 3D matrix if the matrix is a cubic matrix.

Otherwise, the output displays a message as "Error" and terminates.



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ rows, columns, height ≤ 5

1 ≤ Elements in the matrix ≤ 1000

Sample test cases :
Input 1 :
3 3 3
1 2 3
4 5 6
7 8 9
10 11 12
13 14 15
16 17 18
19 20 21
22 23 24
25 26 27
Output 1 :
42
Input 2 :
2 3 4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
17 18 19 20
21 22 23 24
Output 2 :
Error

Question 12


Problem Statement



Patrick is developing a program for financial transactions. Your task is to assist him in completing the program.



You are given two arrays, each of size N. The first array contains a set of positive integers representing the transaction amount, and the second array contains binary values (0s and 1s), where 0 represents a positive sign(credit), and 1 represents a negative sign(debit). 



Implement a program that negates(changes the sign) the corresponding transaction amount using pointers. After the negation operation, print the resulting array.



Example



Input:

5

100 200 120 345 667

1 0 1 0 1

Output:

-100 200 -120 345 -667

Explanation:

There are 5 financial transactions {100, 200, 120, 345, 667}. The second array indicates whether each transaction is a credit (0) or debit (1). The program changes the sign of the transaction amounts based on the corresponding binary values, resulting in the output: {-100, 200, -120, 345, -667}.

Input format :
The first line of input consists of a positive integer N, representing the number of transactions.

The second line consists of N space-separated positive integers, representing the transaction amount.

The third line consists of N space-separated binary values (0s and 1s) representing the nature of the transaction (credit or debit).

Output format :
The output prints N space-separated integers, along with a sign (positive/negative) representing the nature of each transaction.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1 ≤ N ≤ 20

1 ≤ transaction amount ≤ 103

Sample test cases :
Input 1 :
4
55 89 98 56
0 1 1 0
Output 1 :
55 -89 -98 56 
Input 2 :
5
125 678 954 345 252
1 0 0 0 1 
Output 2 :
-125 678 954 345 -252 
Input 3 :
5
100 200 120 345 667
1 0 1 0 1
Output 3 :
-100 200 -120 345 -667 


Question 13

Problem Statement



Harsh is a city planner who is tasked with predicting the population growth of his city over the next few years. He wants to create a program to predict the future population based on the initial population, growth rate, and time.



Assist Harsh in completing his task using pointers and the function Growth() to find the growth rate.



Formula: Predicted population = initial population * e growth rate * time

Input format :
The first line of input consists of a double value N, representing the initial population of the city.

The second line consists of a double value M, representing the growth rate of the city.

The third line consists of a double value T, representing the time (in years).

Output format :
The output prints a double value, representing the predicted population, rounded off to two decimal places.



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1000.0 ≤ N ≤ 100000.0

0.01 ≤ M ≤ 1.0

1.0 ≤ T ≤ 5.0

Sample test cases :
Input 1 :
1000.0
0.05
5.0
Output 1 :
1284.03
Input 2 :
7057.0
0.01
3.5
Output 2 :
7308.37
Input 3 :
100578.0
1.00
2.8
Output 3 :
1653969.68

Question 14


﻿Create a structure called cricketer that stores the cricketer's information such as name, age, number of matches, and average runs as attributes. 



Write a program that takes N cricketers in a structured array and displays the information in ascending order based on average runs scored by each person.

Input format :
The first line of input consists of an integer N, representing the number of cricketers.

In each of the following N lines, the input consists of four space-separated values:

A string (without spaces) - Cricketer's name
An integer - Cricketer's age
An integer - Cricketer's number of matches
A float value - Cricketer's average runs
Output format :
The output displays the information in ascending order based on the average runs scored by each person.



Each line consists of four space-separated values:

A string (without spaces) - Cricketer's name
An integer - Cricketer's age
An integer - Cricketer's number of matches
A float value - Cricketer's average runs rounded to two decimal places


Refer to the sample output for formatting specifications.

Code constraints :
1 ≤ N ≤ 30

length of the name ≤ 50

Sample test cases :
Input 1 :
2
Rahul 32 22 1234.58
David 42 55 256.8
Output 1 :
David 42 55 256.80
Rahul 32 22 1234.58
Input 2 :
5
Shakib 34 206 36.51
Martin 35 186 43.87
Kane 31 151 53.97
Babar 26 88 55.94
Quinton 29 125 45.62
Output 2 :
Shakib 34 206 36.51
Martin 35 186 43.87
Quinton 29 125 45.62
Kane 31 151 53.97
Babar 26 88 55.94


Question 15


Problem Statement



Develop a program using a typedef for a complex number structure. The program should take two sets of real and imaginary parts as input and perform the following operations:



Addition of 2 complex numbers
Subtraction of 2 complex numbers
Multiplication of 2 complex numbers
Modulus of a given complex numbers


Display the results of each operation.



Formulas for reference:

Addition of Complex Numbers: (a + bi) + (c + di) = (a + c) + (b + d)i 
Subtraction of Complex Numbers: (a + bi) - (c + di) = (a - c) + (b - d)i 
Multiplication of Complex Numbers: (a + bi) * (c + di) = (ac - bd) + (ad + bc)i
Modulus (Magnitude) of a Complex Number (a + bi) = √a2 + b2
Input format :
The first line consists of two space-separated float values representing the real and imaginary parts of the first complex number.

The second line consists of two space-separated float values representing the real and imaginary parts of the second complex number.

Output format :
The first line prints the addition of the two complex numbers in the format: a + bi

The second line prints the subtraction of the two complex numbers in the format: a + bi

The third line prints the multiplication of the two complex numbers in the format: a + bi

The fourth line prints a float value representing the modulus of the first complex number.

The fifth line prints a float value representing the modulus of the second complex number.



Note: Here a and b values are float values rounded to two decimal places.



Refer to the sample outputs for the formatting specifications.

Sample test cases :
Input 1 :
2.0 2.0
2.1 2.1
Output 1 :
4.10 + 4.10i
-0.10 + -0.10i
0.00 + 8.40i
2.83
2.97
Input 2 :
4.1 5.1
5.5 7.5
Output 2 :
9.60 + 12.60i
-1.40 + -2.40i
-15.70 + 58.80i
6.54
9.30



Question 16:


Problem Statement



Write a program to create a structure DEP_STORE and declare the variables as store_name,  store_address, phone_no. Create another structure STORE_ITEM and declare the variables as item_number, item_name, available_qty, item_price. 



Generate a report to display the Store Name, Store Address, and Phone number with the item name and its price. Calculate the total item value present in the store. Refer to the example below:





Input format :
The first line of input consists of a string, representing the store name.

The second line consists of a string, representing the store address.

The third line consists of a string, representing the phone number.

The fourth line consists of an integer N, representing the number of items.

For each item, the input consists of the following:

An integer, representing the item number.
A string, representing the item name.
An integer, representing the quantity.
A float value, representing the price per item.
Output format :
The first line prints "Store Name: " followed by the store name.

The second line prints "Store Address: " followed by the store address.

The third line prints "Phone Number: " followed by the phone number.



After a new line, the next line prints "Item Number" followed by a tab space, "Item Name" followed by a tab space, "Available Quantity" followed by a tab space, "Item Price".

In each of the following N lines, the output prints the item number, item name, available quantity, and the item price(a float value rounded to two decimal places) of N items, separated by a tab space.



After a new line, the next line prints "Total Item Value: Rs. " followed by a float value rounded to two decimal places representing the total item value.



Refer to the sample output for the formatting specifications.

Code constraints :
1 ≤ N ≤ 10

2 ≤ Length of customer name < 50

2 ≤ Length of address < 100

2 ≤ Length of phone number < 15

2 ≤ Length of item name < 50

Sample test cases :
Input 1 :
ABC Mart
Chennai
7412589635
2
101
Shoes 
5
500.00
102 
Shirts 
3 
300.50
Output 1 :
Store Name: ABC Mart
Store Address: Chennai
Phone Number: 7412589635

Item Number	Item Name	Available Quantity	Item Price
101		Shoes 		5		500.00
102		Shirts 		3		300.50

Total Item Value: Rs. 3401.50
Input 2 :
Rams Retail
Coimbatore
9874563214
4
190
TNPL A4 sheet Bundle
10
170
345
Hand Gloves
20
20
234
Milton Flask 
13
305
564
Pencil Box
20
55
Output 2 :
Store Name: Rams Retail
Store Address: Coimbatore
Phone Number: 9874563214

Item Number	Item Name	Available Quantity	Item Price
190		TNPL A4 sheet Bundle		10		170.00
345		Hand Gloves		20		20.00
234		Milton Flask 		13		305.00
564		Pencil Box		20		55.00

Total Item Value: Rs. 7165.00


Question 17:

Problem Statement



Ezhil wants to create a program to add N distances given in the inch-feet system using typedef in a structure. He needs to develop a program that allows the user to input N distances, each consisting of inches and feet ensuring that if the inch sum is greater than or equal to 12 it is appropriately converted to feet and then calculate the total sum of these distances.



Can you help Ezhil by developing the required program to fulfill these requirements?



Example



Input:

3

10 3.7

10 5.5

6 8.0



Output:

27

5.20



Explanation:

The sum of the feet is 10+10+6 = 26

The sum of the inch is 3.7+5.5+8.0 = 17.2



1 feet = 12 inches.

17.2 is greater than 12.

So 17.2 - 12 = 5.2.

The result is 27 feet and 5.20 inches.

Input format :
The first line of input contains an integer N, representing the number of distances.

The next N lines each contain two space-separated values: the feet value and the inch value of each distance, separated by space.



Note:

feet - integer

inch - float

Output format :
The first line of output displays the sum of the feet values as an integer.

The second line of output displays the sum of the inch values, rounded to two decimal places, as a float value.



Refer to the sample output for formatting specifications.﻿

Sample test cases :
Input 1 :
3
10 3.7
10 5.5
6 8.0
Output 1 :
27
5.20
Input 2 :
2
5 6.8
2 10.2
Output 2 :
8
5.00
Input 3 :
3
1 1.7 
1 1.5 
6 8.0
Output 3 :
8
11.20


Question 18:

Problem Statement



Ashok, an aspiring architect, needs a program to calculate volumes of geometric shapes. 



He wants to define structures Point3D, Sphere, Cylinder, and GeometryCalculator. Help him accept input for the details of the sphere and cylinder. Display their volumes with two decimal places.



Structure Details:

Point3D: Represents a point in 3D space with coordinates (x, y, z).

Sphere: Describes a sphere with a centre of type Point3D and a radius.

Cylinder: Defines a cylinder with a base centre (Point3D), radius, and height.

GeometryCalculator: Combines a Sphere and a Cylinder for calculations.



Formulae:

Sphere Volume = (4/3) x 3.14 x r3

Cylinder Volume = 3.14 x R2 x h

Input format :
The first line of input consists of three space-separated double values x, y, and z, representing the sphere center.

The second line consists of a double value r, representing the sphere Radius.

The third line consists of three space-separated double values X, Y, and Z, representing the cylinder base center.

The fourth line consists of two space-separated double values R, H, representing the cylinder radius and cylinder height.

Output format :
The first line prints a double value in the following format: "Sphere's Volume: [Volume rounded to two decimal places] cubic units".

The second line prints a double value in the following format: "Cylinder's Volume: [Volume rounded to two decimal places] cubic units".



Refer to the sample output for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

1.0 ≤ x, y, z, r ≤ 100.0

1.0 ≤ X, Y, Z, R, H ≤ 100.0

Sample test cases :
Input 1 :
12.1 18.7 21.8
7.1
18.1 15.5 13.4
41.1 13.2
Output 1 :
Sphere's Volume: 1498.45 cubic units
Cylinder's Volume: 70014.38 cubic units
Input 2 :
1.2 3.4 5.6
1.5
1.6 2.4 5.6
3.2 6.7
Output 2 :
Sphere's Volume: 14.13 cubic units
Cylinder's Volume: 215.43 cubic units


Question 19:


Problem Statement



Bakya works as a medical records assistant in a small clinic. She is tasked with managing and analyzing patient data, specifically focusing on the gender distribution and age of patients. Each patient record includes an ID, name, gender (1 for male and 0 for female), and age. Bakya's job is to count the number of male and female patients and identify if there are any patients older than 40. If patients older than 40 exist, she must list their names; otherwise, she will return '0'. 



Help Bakya by creating a system that processes this patient data using the struct patient and two functions: print_gender() to count males and females, and print_age() to display names of patients above 40 years old.

Input format :
The first line consists of an integer n, representing the number of patients.

In each of the following n lines, the input consists of four space-separated values:

An integer - Patient's ID
A string (without spaces) - Patient's name
An integer - Patient's gender(1- Male, 2- Female)
An integer - Patient's age
Output format :
The first line prints "Count: " followed by two space-separated integers representing the number of males and females in the patient data.

The second line prints "Above 40: " followed by the names of patients whose age is greater than 40 separated by a space.



Refer to the sample output for the formatting specifications. 

Code constraints :
1 ≤ n ≤ 10

Length of the name ≤ 30

The name should not contain any spaces.

There is at least one patient over the age of 40.

Sample test cases :
Input 1 :
5
100 Gokul 1 40
101 Ashok 1 35
231 Banu 2 45 
211 Akaash 1 60
109 Chiranjeevi 1 44
Output 1 :
Count: 4 1
Above 40: Banu Akaash Chiranjeevi 
Input 2 :
2
100 Shyam 1 23
101 Jeeva 1 25
Output 2 :
Count: 2 0
Above 40: 0


Question 20:


Problem Statement



Amanpreet Singh, the school headmaster, wants to create a program to manage student information using structures and pointers. He needs your help in completing the program. He wants to store information about students using a structure and pointers.



The program should handle various tasks such as identifying students of a specific age as exactly 17, finding students with even roll numbers, and retrieving details for a specific roll number. 



Note: It is assumed that at least one student is of age 17, at least one student has an even roll number and the roll number to be searched is present in the list.

Input format :
The first line of input consists of an integer n, representing the number of students.

The next n lines of input consist of the student's roll number as an integer, name as a string without spaces, age as an integer, and address as a string without spaces, separated by a space.

The last line of input consists of an integer, representing the roll number to be searched.

Output format :
The first line of output prints the names of all the students of the age of 17, separated by a space.

The second line of output prints the names of all the students with even roll numbers, separated by space.

The third line of output prints the details (roll number, name, age, and address) of the student separated by a space whose roll number is given.



Refer to the sample output for the formatting specifications.

Code constraints :
In this scenario, the test cases will fall under the following constraints:

2 ≤ n ≤ 10

Length of the student's name ≤ 25

Length of the address ≤ 25

Sample test cases :
Input 1 :
5
1 Alice 17 Coimbatore
2 Ram 15 Chennai
3 Pooja 25 Karur
4 Devi 26 Erode
5 Bava 17 Salem
4
Output 1 :
Alice Bava 
Ram Devi 
4 Devi 26 Erode
Input 2 :
2
1 Shine 17 Bangalore
4 Bob 15 Mumbai
1
Output 2 :
Shine 
Bob 
1 Shine 17 Bangalore


Question 21:


Problem Statement



Caroline loves exploring the world of complex numbers and needs your help to perform addition operations. She wants to use a union named ComplexNumber to represent complex numbers with real and imaginary parts.



Write a program to help Caroline perform complex number addition.

Input format :
The first line of input consists of two space-separated double values, representing the real and imaginary parts of the first complex number.

The second line consists of two space-separated double values, representing the real and imaginary parts of the second complex number.

Output format :
The output prints the sum of the complex numbers, rounded off to two decimal places.



Refer to the sample outputs for formatting specifications.

Code constraints :
In this scenario, the test cases fall under the following constraints:

-150.0 ≤ first complex number ≤ 150.0

-150.0 ≤ second complex number ≤ 150.0

Sample test cases :
Input 1 :
4.0 5.0
3.0 5.0
Output 1 :
7.00 + 10.00i
Input 2 :
-2.5 3.0
1.5 -2.0
Output 2 :
-1.00 + 1.00i
Input 3 :
125.0 35.0
75.0 150.0
Output 3 :
200.00 + 185.00i
