#include<stdio.h>
#include<math.h>
void main()
{
int n;
float s;
printf("ENTER THE NUMBER");
scanf("%d",&n);
s=sqrt(n);
int c=s;
if(c*c==n)
{
printf("Yes");
}
else
{
printf("No");
}
}