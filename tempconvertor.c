#include<stdio.h>
#include<stdlib.h>
float cent (float x);
float far (float x);
int main ()
{
    float F = 33 , C = 0;
    printf("Fahrenheit\tCentigrade\n");\
    while (F<=212){
        printf("%6.2f\t\t%6.2f\n",F,cent(F));
    F++;
    }
    printf("Centigrade\tFahrenheit\n");\
    while (C<=100){
        printf("%6.2f\t\t%6.2f\n",C,far(C));
    C++;
    }

    system("pause");
    return 0;
}
float cent (float x)
{
    float ans;
    ans = (x-32)*(5/9);
    return ans;
}
float far (float x)
{
    float ans;
    ans = (9*x/5)-32;\
    return ans;
}
