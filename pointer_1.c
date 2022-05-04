#include<stdio.h>
void main()
{
int arr[2]={25,48};
int x,*p;
p=&arr[0];
printf("THE ADDRESS OF P=%X",p);
x=*p++;
printf("\nTHE VALUE OF x=%d",x);
printf("\nTHE ADDRESS OF P=%X",p);
}