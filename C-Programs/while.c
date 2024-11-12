//day3
#include<stdio.h>
void main()
{
    int i=5,j=10;
    while(i<j--)
    {
        printf("I=%d\n",i);
    }
    int a=4,b=10;
    while(a<--b) // infinite condtn- (a<b)
    {
        {
        printf("res=%d\n",a);
        }
    }
    while(0) // 1=infinite loop, 0=false, does not execute
    {
        printf("****\n");
    }
}
