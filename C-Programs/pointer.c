// day5
#include<stdio.h>
void main()
{
    int t=700;
    int *p=&t; // (*)-value , &-address of value
    printf("%d\n",t);
    printf("%d\n",*p); //gives null(not printed) or 0 or garbage value
    t++;
    printf("%d\n",t);
    printf("%d\n",*p);
    (*p)++; // *p++ - prints garabage value(operator precedence)
    printf("%d\n",t);
    printf("%d\n",*p);
    printf("%x\n",p); //hexa-decimal value
    printf("%x\n",&t); //address of t
    printf("%x",&p); // address of p
    //**ptr=points to original value
}
