// else if programme
//  By Yug Gandhi
#include<stdio.h>
int main()
{
    int q,p,a;
    printf("Enter your Quantity --> ");
    scanf("%d",&q);
    printf("\nEnter your Price --> ");
    scanf("%d",&p);
    a = p * q;
    if (q>=1000)
    {
        a = a * 0.90;
    }

    return 0;
}
