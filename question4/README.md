## Question 4

Write the logic of the rightrot(x,n) function in main that prints the value of the integer x rotated to the right by n bit positions. Use x=12 and n=2 as an example. Also, provide an example of your choice. (K&R Exercise 2-8) 

Output:
/* right shift instead of right rotate */
 
#include <stdio.h>
 
int rightShift(int number, int shift)
 
{
 
number= number>>shift;
return number;
 
}
 
int main()
 
{
 
printf("%d\n",rightShift(12,2));
printf("%d\n",rightShift(2,1));
 
 
}
gcc question4.c
./a.out
3
1
