// SWAPING VARIABLE WITHOUT 3 VARIABLE
// by YUG GANDHI
#include<stdio.h>
int main()
{
    int a,b;
    a=10;
    b=20;
    printf("before a : %d",a);
    printf("\nbefore b : %d",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nafter a : %d",a);
    printf("\nafter b : %d",b);
    return 0;
}
