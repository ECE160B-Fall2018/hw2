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

<<<<<<< HEAD
} else if (c=='b' || c=='B')
=======
}
else if (c=='b' || c=='B')
>>>>>>> f25cfae38f5a565601d577cfec85d3cf1fa557cd

{

printf("Correct.");

<<<<<<< HEAD
} else if (c=='c' || c=='C')
=======
}
else if (c=='c' || c=='C')
>>>>>>> f25cfae38f5a565601d577cfec85d3cf1fa557cd

{

printf("Wrong.");

<<<<<<< HEAD
} else if (c=='d' || c=='D')
=======

}
else if (c=='d' || c=='D')

>>>>>>> f25cfae38f5a565601d577cfec85d3cf1fa557cd

{

printf("Wrong.");

}

<<<<<<< HEAD
else {
=======
else
{
>>>>>>> f25cfae38f5a565601d577cfec85d3cf1fa557cd

printf("Invalid input.");

}
<<<<<<< HEAD
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
=======
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

>>>>>>> f25cfae38f5a565601d577cfec85d3cf1fa557cd
