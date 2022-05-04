#include<stdio.h>
void main()
{
long long int i,j,r;
int c=0,x=0;
printf("\nENTER THE NUMBER ");
scanf("%lld",&i);
j=i;
while(j>0)
{
r=j%10;
j=j/10;
x++;
if(r==1||r==2||r==3||r==4||r==5)
{
c++;
}
}
if(x==c)
{
printf("THE NUMBER IS VALID");
printf("\nTHE DIGITS IN NUMBER IS =%d",c);
}
else
printf("\nTHE NUMBER IS NOT VALID");

}