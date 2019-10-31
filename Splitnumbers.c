#include <stdio.h>

int main()
{
  int a, b, c, d, e;
  printf( "Enter one 4 digit number: \n" );
  scanf( "%d", &a );
  b = a/1000;
  c = (a%1000)/100;
  d = (a%100)/10;
  e = (a%10);
  printf( "%d%4d%4d%4d\n", b, c, d, e );
  return 0;
}
