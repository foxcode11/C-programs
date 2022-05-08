#include<stdio.h>
#include<string.h>
void display(char s[],char t[])
{
char *x=s;
char *y=t;
while(*x)
{
x++;
}
while(*y)
{
*x=*y;
y++;
x++;
}
*x='\0';
printf("\nTHE CONCATE STRING IS\n");
puts(s);
}
void main()
{
char ar[100];
char arr[100];
printf("\nENTER THE FIRST STRING\n");
gets(ar);
printf("\nENTER THE SECOND STRING\n");
gets(arr);
display(ar,arr);
}