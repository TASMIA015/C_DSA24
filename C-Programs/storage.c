//day4
#include<stdio.h>
void sum()
{
    static int n1=100 , n2=200; //static-does not re-initialise repeatedly
    int c=n1+n2;
    printf("C= %d\n",c);
    n1++; n2++;
}
int n; //auto-initialises to 0 outside a function
void main()
{
    register int i=0;
    int t;   // variable takes random garbage value when not initialised
    printf("%d\n",t);
    printf("%d\n",n);
    sum();
    sum();
    sum();
    sum();
}
