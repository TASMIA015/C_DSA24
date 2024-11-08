//day3
#include<stdio.h>
void main()
{
    int i=5,j=10;
    do
    {
        printf("I=%d\n",i);
    } while(i<j--);
    int a=5,b=10;
    do{
        {
        printf("No.=%d\n",a);
        }
    }while(a<--b);
    do{
        printf("***\n"); //executed once even if condtn false(0)
    }while(0);
}
