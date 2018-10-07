#include <stdio.h>

int bitShift(int x) 
{

if (x<4)

{
x= x<<2;
}
else if(x>=8)

{

x=x>>2;

}

else if(x>4 && x<8)

{

x=x*1;

}
return x;

}
int main() 
{

printf("%d\n",bitShift(3));
printf("%d\n",bitShift(5));
printf("%d\n",bitShift(10));


}

