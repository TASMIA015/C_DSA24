#include<stdio.h>
int main()
{
    int a;
    printf("Enter an integer :\n");
    scanf("%d",&a);
    // checks if the number is between 10 & 20 and even
    if(a>=10 && a<=20 && a%2==0){
        printf("Valid and Even\n");
    }
    // prints the message if the conditions are not met
    else{
        printf("Invalid");
    }
    return 0;
}
