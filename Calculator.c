#include<stdio.h>
float add(float, float);
float sub(float, float);
float mul(float, float);
float div(float, float);
int rem(int, int);
int fact(int);
int pow(int, int);
int main()
{
	int choice, i, j;
	float a, b;
	do
	{
		printf("Choose from the menu (1-7): \n");
	printf("1- Add\n2- Subtract\n3- Multiply\n4- Divide\n5- Remainder\n6- Factorial\n7- Power Calculator\nInput: ");
	scanf("%d", &choice);
	if(choice==6)
	{
		printf("Enter a number: ");
		scanf("%d", &i);
	}
	else if(choice==5 || choice==7)
	{
		printf("Enter first number: ");
		scanf("%d", &i);
		printf("Enter second number: ");
		scanf("%d", &j);
	}
	else if(choice>=1 && choice <=4)
	{
		printf("Enter first number: ");
		scanf("%f", &a);
		printf("Enter second number: ");
		scanf("%f", &b);
	}
	else
	{
		printf("Wrong Input!");
	}
	printf("\n\n");
	}
	while(choice>7);
	switch(choice)
	{
		case 1: printf("Addition of %0.1f and %0.1f is %0.1f", a, b, add(a, b)); break;
		case 2: printf("Subtraction of %0.1f and %0.1f is %0.1f", a, b, sub(a, b)); break;
		case 3: printf("Multiplication of %0.1f and %0.1f is %0.1f", a, b, mul(a, b)); break;
		case 4: printf("Division of %0.1f and %0.1f is %0.1f", a, b, div(a, b)); break;
		case 5: printf("Remainder of %d and %d is %d", i, i, rem(i, j)); break;
		case 6: printf("Factorial of %d is %d", i, fact(i)); break;
		case 7: printf("Power of %d and %d is %d", i, j, pow(i, j)); break;
	}
	return 0;
}
float add(float a, float b)
{
	float res;
	res = a+b;
	return res;
}
float sub(float a, float b)
{
	float res;
	res = a-b;
	return res;
}
float mul(float a, float b)
{
	float res;
	res = a*b;
	return res;
}
float div(float a, float b)
{
	float res;
	res = a/b;
	return res;
}
int rem(int a, int b)
{
	int res;
	res = a%b;
	return res;
}
int fact(int i)
{
	int res=1, j;
	for(j=1; j<=i; j++)
		res = res*j;
	return res;
}
int pow(int a, int b)
{
	int res=1, i;
	for(i=1; i<=b; i++)
		res = res*a;
	return res;
}
