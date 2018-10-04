## Question 8

Write a program that mimics rock-paper-scissors. The input should be a single letter: "r", "p", or "s" representing "rock", "paper", and "scissors", respectively. Print out the computer's choice. Also, print out the result as "You win!", "You lose.", and "Tie." depending on the result of the game. 

If the user enters an invalid letter, print out "Invalid choice."

You may hard code a computer choice or if you want a challenge, look into using the rand() function or a random number generator function.

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
