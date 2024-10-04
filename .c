
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int P;
int n;
int i=0;

int main ()
{
  scanf("%d",&n);
    while ( i <= 10 )
      {
          P = n * i;
          printf("%d\n",P);
          i++;
      }
    return 0;
}
