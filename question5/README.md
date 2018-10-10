## Question 5

Write the logic of the lower function (from K&R pg. 43) in main, which converts upper case letters to lower case, with a condition expression instead of if-else. Provide an example to demonstrate your logic. (K&R Exercise 2-10) 

Output:
/*  lower:    convert  c  to  lower  case;  ASCII  only  */
#include <stdio.h>
 
int lower(int c)
{
 c>='A'  &&  c<='Z'? c=c +'a'-'A' : c;
return c;
}
 
int main()
{
int c;
scanf("%i",&c);
printf("%i",lower(c));
 
}
~                                      
gcc question5.c
./a.out
65
97

