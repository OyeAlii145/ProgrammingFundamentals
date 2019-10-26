#include<stdio.h>
int main()
{
    int i, j, k, l, m, space;
    space = 3;
    for(i=1; i<=4; i++)
    {
        for(j=1; j<=space; j++)
            printf(" ");
            space--;
        for(j=1; j<=2*i-1; j++)
        printf("*");
        printf("\n");
    }
    space = 1;
    int n=4;
    for(i=1; i<=n-1; i++)
    {
        for(j=1; j<=space; j++)
            printf(" ");
            space++;
        for(j=1; j<=2*(n-i)-1; j++)
        printf("*");
        printf("\n");
    }
}
