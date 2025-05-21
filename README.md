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

 

Super Quiz Bee is a famous quiz Competition that tests students on a wide variety of academic subjects. This week’s participants were kids of age 12 to 15 and the quiz questions were based on the Gregorian calendar.

 

In the first round of the competition, the Host of the event told the participants that it was Monday on the date 01/01/2001. Later he questioned each one of the participants what would be the day on the 1st of January, giving them a particular year. Write a program to help the Host validate the answers given by the participants.

Input format :
The input consists of an integer that corresponds to the year.

Output format :
The output displays the day on the 1st of January of that given year.



Refer to the sample output for the formatting specifications.

Code constraints :
1700 ≤ Year ≤ 2100

Sample test cases :
Input 1 :
1994
Output 1 :
Saturday
Input 2 :
2014
Output 2 :
Wednesday

Question 4
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

Question 5
Problem Statement



Write a C program to generate Electricity bills.



If the type of the EB connection is Domestic, calculate the amount to be paid as follows:

first 100 units - Rs. 1 per unit
101-200 units - Rs. 2.50 per unit
201 -500 units - Rs. 4 per unit
> 501 units - Rs. 6 per unit


If the type of the EB connection is Commercial, calculate the amount to be paid as follows:

first 100 units - Rs. 2 per unit
101-200 units - Rs. 4.50 per unit
201 -500 units - Rs. 6 per unit
> 501 units - Rs. 7 per unit


Examples



Input:

D

150

Output:

Electricity Bill Amount: Rs. 225.00

Explanation:

For a domestic connection with 150 units consumed, the electricity bill amount would be calculated as follows:

first 100 units: Rs. 1.0 per unit = Rs. 100
next 50 units: Rs. 2.5 per unit = Rs. 125
Total amount = Rs. 100 + Rs. 125 = Rs. 225.



Input:

C

600

Output:

Electricity Bill Amount: Rs. 3150.00

Explanation:

For a commercial connection with 600 units consumed, the electricity bill amount would be calculated as follows:

first 100 units: Rs. 2.0 per unit = Rs. 200
next 100 units: Rs. 4.5 per unit = Rs. 450
next 300 units: Rs. 6.0 per unit = Rs. 1,800
remaining 100 units: Rs. 7.0 per unit = Rs. 700
Total amount = Rs. 200 + Rs. 450 + Rs. 1,800 + Rs. 700 = Rs. 3,150.

Input format :
The first line of input consists of the type of EB connection - D for Domestic and C for Commercial.

The second line of input consists of the value of units consumed.

Output format :
The output prints the bill amount, rounded off to 2 decimal places.



Refer to the sample output for formatting specifications.

Sample test cases :
Input 1 :
D
150
Output 1 :
Electricity Bill Amount: Rs. 225.00
Input 2 :
C
600
Output 2 :
Electricity Bill Amount: Rs. 3150.00
Input 3 :
X
50
Output 3 :
Invalid type of EB connection. Please enter either D or C.

    
