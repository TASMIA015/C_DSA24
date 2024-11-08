#include<stdio.h>
void main()
{
    float f; 
    printf("Enter a floating point number:\n"); // user input
    scanf("%f",&f);
    int i=(int)f;  //typecasting float to int
    printf("original floating point no. is: %.2f\n",f); //prints the original float value upto 2 decimal places
    printf("Integer part after type casting: %d\n",i); //prints the intger value after typecasting
}
