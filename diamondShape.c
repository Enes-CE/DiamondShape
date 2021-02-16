#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SIZE 15

int main()
{
    for(int i = 0, k = 0, l = SIZE / 2; i < SIZE; k++)
    {
        if(k == abs((SIZE / 2) - i))
        {
            for(int j = 0; j < (2 * abs(abs(l) - (SIZE / 2))) + 1; j++)
                printf("*");

            printf("\n"), i++, k = -1, l--;
            continue;
        }
        printf(" ");
    }
    return 0;
}
/*
output:
       *
      ***
     *****
    *******
   *********
  ***********
 *************
***************
 *************
  ***********
   *********
    *******
     *****
      ***
       *
*/
