//day4

//recursion-function calling itself repeatedly

#include<stdio.h>
void sum(int n1,int n2) //function definition
{
    //while(n1<200 && n2<300)--iteration
    int c = n1+n2;
    printf("The sum of a and b is=%d\n",c);
    n1++;
    n2++;
    sum(n1,n2);
    
}
void main()
{
    int a,b;
    printf("Enter the numbers:\n");
    scanf("%d%d",&a, &b);
    //function call
    sum(a,b); 
    printf("2 numbers added=\n");
}
