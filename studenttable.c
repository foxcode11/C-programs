#include<stdio.h>
#include<malloc.h>
#include<string.h>
void main()
{
    char s;
    int x,n;
    printf("ENTER THE NUMBER OF STUDENT\n");
    scanf("%d",&x);
    char **ptr=(char**)malloc(x);
    for(int i=0;i<x;i++)
    ptr[i]=(char*)malloc(50);

    printf("ENTER THE NAME\n");
     for(int i=0;i<x;i++)
    {
    fflush(stdin);
     gets(ptr[i]);
    }
    printf("THE NAMES ARE:\n");
     for(int i=0;i<x;i++)
    {
     puts(ptr[i]);
    }
    printf("TO INSERT STUDENT NAME ENTER: 'A'\n");
    printf("TO DELETE THE STUDENT NAME ENTER: 'B'\n ");
    printf("TO PRINT THE STUDENT NAME ENTER: 'C'\n");
    scanf("%c",&s);
    switch(s)
    {
        case 'A':

                    printf("ENTER THE NUMBER OF STUDENT YOU WANT TO ENTER\n");
                    scanf("%d",&n);
                    ptr=realloc(ptr,x+n);
                    printf("ENTER THE NAME\n");
                    for(int i=x;i<x+n;i++)
                    {
                        fflush(stdin);
                       gets(ptr[i]);
                    }

                    break;
     case 'B':   free(ptr);
                 break;
     case 'C':  printf("THE NAMES ARE:\n");
                for(int i=0;i<x;i++)
                {
                puts(ptr[i]);
                }
     break;
    default :printf("ENTER THE CORRECT COICE");


    }
}
