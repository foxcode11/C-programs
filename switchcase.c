#include<stdio.h>
void main()
{
int n,x;
int fact=1;
int c=0;
printf("\nENTER THE NUBMERFOR OPERATION");
scanf("%d",&n);
printf("ENTER 1 FOR  FINDING FACTORIAL \n ENTER 2 FOR CHECKING FOR PRIME OR NOT \n ENTER 3 FOR CHECKING FOR ODD OR EVEN");
scanf("%d",&x);
switch(x)
{
case 1:   
          for(int i=1;i<=n;i++)
          fact=fact*i; 
          printf("\nTHE FACTORIAL OF GIVEN NUMBER IF =%d",fact);
          break;
case 2:   
          for(int i=1;i<=n;i++)
          {
          if(n%i==0)
          c++;
          }
          if(c==2)
          printf("\nTHE NUMBER IS PRIME ");
          else
          printf("\nTHE NUMBER IS NOT PRIME");
          break;
case 3:   if(n%2==0)
          printf("\nTHE NUMBER IS EVEN");
          else
          printf("\nTHE NUMBER IS ODD");
          break;
default:  printf("\nENTER THE CORRECT CHOICE");
}
} 