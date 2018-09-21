## Question 7

Write a program to determine if 40 degrees Fahrenheit is below freezing or above freezing. Do the same for 30 degrees Fahrenheit. Print out "Below Freezing" or "Above Freezing".

Output: 

#include <stdio.h>

int main() { int a = 40; int b = 30;

if(a>32)

{

printf("%i is above freezing.\n",a);

}

else {

printf("%i is below freezing.\n",a); }

if (b>32)

{

printf("%i is above freezing.\n",b);

}

else

{ printf("%i is below freezing.\n",b);

}

}

gcc question7.c
output: 40 is above freezing.
        30 is below freezing.
