## Question 6

Write a program that bitshifts an int x left by 2 if it is less than 4 and right shifts x by 2 if it is greater than or equal to 8. Print the final result. If it lies in between, just print the same number. Do this for x=3, x=5, and x=10.

Output:

#include <stdio.h>
 
int bitShift(int x)
{
 
if (x<4)
 
{
x= x<<2;
}
else if(x>=8)
 
{
 
x=x>>2;
 
}
 
else if(x>4 && x<8)
 
{

gcc question6.c
./a.out
12
5
2

