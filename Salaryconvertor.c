#include<stdio.h>
int main()
{
    float sales,salary;

    printf("Enter sales in pounds (-1 to end):");
    scanf("%f",&sales);

    while(sales!=-1){

    salary=200+(sales/100)*9;
    printf("Salary is:%.2f\n",salary);

    printf("Enter sales in pounds (-1 to end):");
    scanf("%f",&sales);

    }
    return 0;
}
