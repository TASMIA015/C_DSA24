#include<stdio.h>
int main()
{
    int n;
    printf("Enter a positive integer:\n"); 
    //Takes input from user
    scanf("%d",&n);
    if(n<=9 && n>=1) // checks condition if the integer is b/w 1 and 9
    {
        char *arr[]={"one","two","three","four","five","six","seven","eight","nine"};
        printf("%s\n", arr[n-1]);  //printd the string for the given integer
    }
    else{
        printf("Greater than 9"); //prints the message if condition is false
    }
    return 0;
}
