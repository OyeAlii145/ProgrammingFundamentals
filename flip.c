#include<stdio.h>
#include<stdlib.h>

int main()

{
    int a,th,h,t;
    printf("Enter any number: ");
    scanf("%d",&a);

    th=a/1000;
    a=a%1000;
    printf("%d\n",th);

    h=a/100;
    a=a%100;
    printf("%d\n",h);

    t=a/10;
    a=a%10;
    printf("%d\n",t);
    printf("%d\n",a);

    return 0;



}
