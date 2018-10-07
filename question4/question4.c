/* right shift instead of right rotate */

#include <stdio.h>

int rightShift(int number, int shift)

{

number= number>>shift;
return number;

}

int main()

{

printf("%d\n",rightShift(12,2));
printf("%d\n",rightShift(2,1));


}
