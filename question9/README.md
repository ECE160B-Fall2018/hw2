## Question 9

Write a program that accepts a character using getchar and converts the character to its ascii decimal equivalent. Also convert this character to its octal and hexidecimal equivalent. 

Output:

#include <stdio.h>
  
int main() {

char c = getchar();

printf("%c is %d in decimal, %x in hexadecimal, and %o in octal.\n", c,c,c,c);

}

gcc question9.c
./a.out 
A
A is 65 in decimal, 41 in hexadecimal, and 101 in octal.
