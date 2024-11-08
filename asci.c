//day2
#include<stdio.h>
void main()
{
    printf("%c\n",'A');//character
    printf("%s\n","A");//string
    char ch='B';
    printf("%c\n",ch);
    printf("%d\n",ch);
    ch++; // ASCII value of B increases by 1
    printf("%d\n",ch);
    printf("%c\n",ch);
    int i=ch; //converts char to int, method 2 of finding ASCII value
    printf("%d\n",i);
    i+=32;
    printf("%d\n",i);
    ch=i;
    printf("%c\n",ch); //uppercase to lowercase (c ascii value=99)
    char chh='a'; //a=97
    printf("%c\n",chh);
    chh-=32; // lowercase to uppercase
    printf("%c\n",chh);
}
