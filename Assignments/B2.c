#include<stdio.h>
void main()
{
    int a , b;
    printf("Enter a and b:\n");
    scanf("%d%d",&a,&b); // takes user input
    if(a==b){ //checks if a=b
        printf("a and b are equal\n");
    }if(a!=b){ //checks if a is not equal to b
        printf("a and b are not equal\n");
    }if(a>b){  //checks if a is greater than b
        printf("a is greater than b\n");
    }if(a<b){ //checks if a is lesser than b
        printf("a is lesser than b");
    }
}