#include<stdio.h>
int main()
{
    int n; //base
    int i=2; //power=2
    printf("Enter the base:\n");
    scanf("%d",&n);
    for(n=1;n<=7;n++) //loops through 2^1 to 2^7
    { 
        printf("%d^2 is %d\n",n,i);
        i*=2; //multiplies current value of i by 2
    } 
    return 0;
}