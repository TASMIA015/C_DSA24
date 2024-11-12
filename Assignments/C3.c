#include<stdio.h>
int main()
{
    int N,x=0;
    printf("Enter a number:\n");
    scanf("%d",&N);
    //divides N by 10 until it becomes 0 
    while(N!=0){
        N/=10;
        x++; //counts each division or loops
    }
    printf("The no. of digits is: %d\n",x);
    return 0;
}