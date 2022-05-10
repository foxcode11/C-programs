#include<stdio.h>
void main()
{
int n,i,j;
printf("ENTER THE NUMBER");
scanf("%d",&n);
for(i=n;i>=1;i--)
   {
    for(j=1;j<=i;j++)
        {
        printf(" * ");
        }
     printf("\n");
   }

for(i=n;i>=1;i--)
   {
    for(j=1;j<=i;j++)
        {
        printf(" %d ",i);
        }
     printf("\n");
   }

for(i=n;i>=1;i--)
   {
    for(j=1;j<=i;j++)
        {
        printf(" %d ",j);
        }
     printf("\n");
   }
}