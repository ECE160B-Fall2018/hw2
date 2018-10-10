## Question 3

Write the logic of invert(x,p,n) that prints x with the n bits that begin at position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged. As an example, use x=7, p=2, n=1. In addition, provide another example of your choice. (K&R Exercise 2-7) 

Output:
#include <stdio.h>
 
 
unsigned invert(unsigned x, int p, int n)
 
{
     return x^(~(~0<<n)<<(p+1-n));
}
 
 
int main()
{
    printf("%i\n", invert(7, 2, 1));
    printf("%i\n", invert(19, 3, 2));
 
return 0;
 
}

gcc question3.c
./a.out
3
31

