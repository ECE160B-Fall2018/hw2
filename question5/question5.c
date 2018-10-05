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
