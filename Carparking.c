/* This program is prepared by Faizan Ali…
SP19-BCS-145…
On date 01 nov 2019…
This program is for  car parking charges*/

#include<stdio.h>
#include<conio.h>
float hrs=0, hrs1, hrs2, hrs3, thrs, charges=0, tcharges=0;
int car=1;
/*Here variables are declared globally... car mean no. of car.....hrs mean hours and
hrs1, hrs2, hrs3 are for car 1, car 2, car 3 respectively......charges are cost to per car
thrs is total hours........tcharges is total charge*/
void park (int,float,float);//This is the prototype of my function defined at the end
int main ()
{
    /*Here are few print and scan statements for hours of each car*/
    printf("Enter the number of Hours for Car 1 : ");
    scanf("%f",&hrs1);
    printf("Enter the number of Hours for Car 2 : ");
    scanf("%f",&hrs2);
    printf("Enter the number of Hours for Car 3 : ");
    scanf("%f",&hrs3);
    printf("Car\t Hours\t charges\n");
    //Here the function is called
    park(car,hrs,charges);
    system("pause");
    return 0;
}
void park (int car,float hrs, float charges)//My Function
{
    //hrs1, hrs2, hrs3 are not declared as they are global variables
    //loop to solve different values
    while (car<=3){
        //conditions to check which car number and assign corresponding hours
        if (car==1)
            hrs=hrs1;
        else if (car==2)
            hrs=hrs2;
        else
            hrs=hrs3;
        // my logic to calculate the charges
        charges = 30;
        if (hrs>3)
            charges = charges + (hrs-3)*5;
        if (charges > 100)
            charges = 100;
        thrs = thrs + hrs;
        tcharges = tcharges + charges;
        //statement for displaying data in tabular form
        printf("%d\t%6.2f\t %6.2f\n",car,hrs,charges);
        car++;//increment
    }
    printf("Total\t%6.2f\t %6.2f\n",thrs,tcharges);//statement to print total values
}
