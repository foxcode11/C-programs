#include<stdio.h>
struct complex
{
    float r,i;
};
void sum(struct complex t1,struct complex t2)
{
   struct complex t3;
   printf("%s","SUM =");
   t3.r=t2.r+t1.r;
   t3.i=t2.i+t1.i;
   printf("%0.1f%s%0.1f%s",t3.r,"+",t3.i,"i");
}

int main()
{

    struct complex t1,t2;
    printf("ENTER FIRST COMPLEX NUMBER:\nEnter real and imaginary part respectively:\n");
    scanf("%f%f",&t1.r,&t1.i);
    printf("ENTER SECOND COMPLEX NUMBER:\nEnter real and imaginary part respectively\n");
    scanf("%f%f",&t2.r,&t2.i);
    sum(t1,t2);
    return 0;
}
