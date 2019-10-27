/* This program is developed by FaiZaan Alii...
This progam is for generating random numbers..*/


#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int Rand(int a, int b);
int main()
{
    int rnd;
    srand(time(0));
    rnd = Rand(1, 2);
    printf("Random number is: %d\n", rnd);
    srand(time(0));
    rnd = Rand(1, 100);
    printf("Random number is: %d\n", rnd);
    srand(time(0));
    rnd = Rand(0, 9);
    printf("Random number is: %d\n", rnd);
    srand(time(0));
    rnd = Rand(1000, 1112);
    printf("Random number is: %d\n", rnd);
    srand(time(0));
    rnd = Rand(-1, 1);
    printf("Random number is: %d\n", rnd);
    srand(time(0));
    rnd = Rand(-3, 11);
    printf("Random number is: %d\n", rnd);

}
int Rand(int a, int b)
{
        int num;
        num = (rand() % (b-a)+1) + a;
        return num;
}
