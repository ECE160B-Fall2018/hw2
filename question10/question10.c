#include <stdio.h>

int main() 

{

printf("What is 9 + 10? \n a. 10 \n b. 19 \n c. 21 \n d. 22 \n");

char c=getchar();

if (c=='a' || c=='A')

{

printf("Wrong.");

}
else if (c=='b' || c=='B')

{

printf("Correct.");

}
else if (c=='c' || c=='C')

{

printf("Wrong.");


}
else if (c=='d' || c=='D')


{

printf("Wrong.");

}

else 
{

printf("Invalid input.");

}
return 0;
}
