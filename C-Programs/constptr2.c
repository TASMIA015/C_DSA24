#include<stdio.h>
void main()
{
    int t=700;
    //const int *p=&t; constant for *p

    int *const p=&t; // the pointer itself is constant
    (*p)++;
    printf("%d\n",*p);
    int a=1000;
    const int *const b=&a; 
    //(*p)++;
    int d=200;
    //b=&d;
    a++;
    printf("%d\n",a);
}
