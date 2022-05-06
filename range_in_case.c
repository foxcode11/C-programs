#include<stdio.h>
void main()
{
int n;
printf("\nENTER THE NUMBER");
scanf("%d",&n);
switch(n)
{
case 0 ... 10: printf("\nTHE SQUARE OF NUMBER IS =%d",n*n);
              break;
case 11 ... 20: printf("\nTHE CUBE OF NUMBER IS =%d",n*n*n);
             break;
default: printf("\nTHE ENTERED NUMBER IS =%d",n);
}
}