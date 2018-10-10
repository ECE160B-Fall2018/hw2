#include <stdio.h>


unsigned invert(unsigned x, int p, int n)

{   
     return x^(~(~0<<n)<<(p+1-n));
}


int main()
{
    printf("%i\n", invert(7, 2, 1));
    printf("%i\n", invert(19, 3, 2));

return 0;

}


