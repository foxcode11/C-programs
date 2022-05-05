#include<stdio.h>
void main()
{
int x,y,z;
printf("ENTER THE TWO NUMBERS");
scanf("%d%d",&x,&y);
printf("\nENTER 1 FOR ADDITION");
printf("\nENTER 2 FOR SUBSTRATION");
scanf("%d",&z);
switch(z)
{
case 1: printf("\nTHE SUM OF TWO NUMBERS RE = %d",x+y);
        break;
case 2: printf("\nTHE SUBSTRCTION OF TWO NUMBERS ARE =%d",x-y);
        break;
default: printf("\nTHE MULTIPLICTION OF TWO NUMBERS ARE =%d",x*y);
}
}