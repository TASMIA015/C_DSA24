#include<stdio.h>
void main()
{
    int age;
    int income;
    printf("Enter age and income:\n"); 
    scanf("%d%d",&age,&income); //Prompts user to input age and income
    
    //Checks all the conditions ,if true prints eligible 
    // If false prints not eligible
    if(age>=18 && age<=25 && income>=5000)
    {
        printf("eligible\n"); 
    }
    else if(age>=26 && age<=40 && income>=10000)
    {
        printf("eligible\n");
    }
     else if(age>40 && age<= 60 && income>=15000)
    {
        printf("eligible");
    }
    else
    printf("Not eligible");
    
}