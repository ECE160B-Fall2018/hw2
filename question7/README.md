#include <stdio.h>

int main()
{
int a = 40;
int b = 30;

<<<<<<< HEAD
Output: 

#include <stdio.h>

int main() { int a = 40; int b = 30;

=======
>>>>>>> 05d7a33be782a90ebf40498ea473147f138dca33
if(a>32)

{

printf("%i is above freezing.\n",a);

}

<<<<<<< HEAD
else {

printf("%i is below freezing.\n",a); }
=======
else
{
    
printf("%i is below freezing.\n",a);
}   
    
>>>>>>> 05d7a33be782a90ebf40498ea473147f138dca33

if (b>32)

{

printf("%i is above freezing.\n",b);

}

else

<<<<<<< HEAD
{ printf("%i is below freezing.\n",b);

}

=======
{
printf("%i is below freezing.\n",b);

}


>>>>>>> 05d7a33be782a90ebf40498ea473147f138dca33
}

gcc question7.c
output: 40 is above freezing.
        30 is below freezing.
