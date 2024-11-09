#include<stdio.h>
void main()
{
    char ch;
    printf("Enter the character:");// takes user input
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z'){ //check if the character is uppercase
        ch=ch+32; // converting from upper to lower case +32
        printf("converted letter:%c\n",ch);
    }
    else if (ch>='a' && ch<='z') //check is the character is lowercase
    {
        ch=ch-32;// converting from lower from upper case -32
        printf("converted letter:%c\n",ch);
    }
    else
    printf("Invalid input!"); 
}
