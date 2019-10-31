#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int  km;
    float liter, lpkm, avg=0,i=1;
    printf("Enter the Liters used (-1 to end): ");
    scanf("%f",&liter);
    while (liter != -1){
        printf("Enter the KM's driven: ");
        scanf("%d",&km);
        lpkm = (liter*100.0)/(float)km;
        avg = lpkm + avg;
        printf("The liters/100km for this tank was %f\n",lpkm);
        printf("Enter the Liters used (-1 to end): ");
        scanf("%f",&liter);
        i++;
    }
    avg = avg/i;
    printf("The overall average consumption was: %f",avg);


    system("pause");
    return 0;
}
