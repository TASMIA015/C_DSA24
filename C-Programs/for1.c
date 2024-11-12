//day3
#include<stdio.h>
void main()
{
    int i=0,j=25;
    for(;i<j--;j=j-3,i++)
    {
        printf("***\n");

    }
    printf("%d\n",i*j);
}
