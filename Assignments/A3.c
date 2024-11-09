#include<stdio.h>
int main()
{
    int a;
    printf("Enter a hexadecimal value:\n");
    scanf("%x",&a); // takes hexadecimal value as input
    // Prints the value in decimal, octal and hexadecimal
    if(a>0xFFFF){
        printf("Input is out of range !\n");
        return 1;
    }
    printf(" The decimal value is= %d\n",a);
    printf("The octal value is %o\n",a);
    printf("The uppercase hexadecimal value is: %5X\n",a);
    return 0;
}
