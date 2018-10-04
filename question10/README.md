## Question 10

Write a multiple choice question of your choice that accepts a letter as an input using getchar. Determine if the answer given is correct or incorrect and please print out "Correct" or "Wrong" depending on the answer given.

Output:

#include <stdio.h>

int main()

{

printf("What is 9 + 10? \n a. 10 \n b. 19 \n c. 21 \n d. 22 \n");

char c=getchar();

if (c=='a' || c=='A')

{

printf("Wrong.");

} else if (c=='b' || c=='B')

{

printf("Correct.");

} else if (c=='c' || c=='C')

{

printf("Wrong.");

} else if (c=='d' || c=='D')

{

printf("Wrong.");

}

else {

printf("Invalid input.");

}
 return 0;
 } 
gcc question10.c
./a.out
What is 9 + 10? 
a. 10 
b. 19 
c. 21 
d. 22
19
Correct.
