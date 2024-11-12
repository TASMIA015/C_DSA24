//day 5 constant pointer 

#include<stdio.h>
void main()
{
    int t=700;
    const int *p=&t;
    //(*p)++; - throws an error since it has a constant value
    t++;
    printf("%d\n",t);
}
