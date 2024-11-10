//day 6
#include<stdio.h>
void main()
{
    // Use of arrays to store strings 
    char name[15]={'C','i','t','y', 'C','o','l','l','e','g','e','\0'}; 
    printf("%s\n",name);
    printf("%c\n",name[1]);
    printf("%c\n",name[3]);
    for(int i=0;i<11;i++)
    {
        printf("%c\t",name[i]);
    }
    for(int i=11;i>=0;i--) // to reverse  the characters  
    printf("%c\t",name[i]);
    puts("\n\n");
    //executes the loop until it is null '\0'
    for (int j=0;name[j]!='\0';j++)
    printf("%c\t",name[j]);
}