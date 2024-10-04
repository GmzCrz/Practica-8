#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int i;
int P;
int n;
int main ()
{
    printf("Dame un numero: ");
    scanf("%d", &n);
    
    for (i = 1; i <= 10; i++)
    {
        P = n * i;
        printf("%d\n",P);
    }
    
    return 0;
}
