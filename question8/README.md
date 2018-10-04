
#include <stdio.h>

int main()
{
printf("Let's play rock, paper, scissors. Rock, paper, scissors and shoot.\n");
char c=getchar();

if(c=='r' || c=='R')
{

printf("Scissors. You win!");

}

else if(c=='s' || c== 'S')

{

printf("Rock. You lose!");

}

else if(c=='P' || c=='p')

{

printf("Paper. It's a tie!");

}
else
{

printf("Invalid input.");

}

return 0;

}
~                                                                                                                                                                                                         
~                                                                                                                                                                                                         
~                                                                                                                                                                                                         
~                                                                                                                                                                                                         
~                                                                                                                                                                                                         
~                                                                                                                                                                                                         
~                                                                                                                                                                                                         
~                                                                                                                                                                                                         
~                                                                                                                                                                                                         
~                                                                                                                                                                                                         
~                                                                                                                                                                                                         
~                                                                                                                                                                                                         
~                                                                                                                                                                                                         
~                                                                                                                                                                                                         
~                                                                                                                                                                                                         
~                                                                                                                                                                                                         
~                                                                                                                                                                                                         
~                                                                                                                                                                                                         
~                                                                                                                                                                                                         
~                                                                                                                                                                                                         
~                                                                                                                                                                                                         
~                                                                                                                                                                                                         
~                                                                                                                                                                                                         

<<<<<<< HEAD
Output:

#include <stdio.h>

int main()
{
printf("Let's play rock, paper, scissors. Rock, paper, scissors and shoot.\n");
char c=getchar();

if(c=='r' || c=='R')
{

printf("Scissors. You win!");

}

else if(c=='s' || c== 'S')

{

printf("Rock. You lose!");

}

else if(c=='P' || c=='p')

{

printf("Paper. It's a tie!");

}
else
{

printf("Invalid input.");

}

return 0;

}

gcc question8.c
./a.out
Let's play rock, paper, scissors. Rock, paper, scissors and shoot.
R
Scissors. You win!
