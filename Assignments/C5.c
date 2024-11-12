#include<stdio.h>
int main()
{
    int N;
    int res;
    printf("Enter a 5-digit integer:\n"); //Reads the user input
    scanf("%d",&N);
    while(N>=10000 && N<=99999) //executes the code as long as the condition is true
    {
        //adds each digit from leftmost digit and stores it in res
        res= N/10000 + (N/1000)%10 + (N/100)%10 + (N/10)%10 + N%10;
        printf("The sum of the digits of a 5-digit integer is:%d",res);
        break; //to exit infinite loop
    }
    return 0;
}