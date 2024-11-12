//day 7
#include<stdio.h>
void main()
{
    // Use of arrays to store strings 
    char name[12]={'c','i','t','y','c','o','l','l','e','g','e','\0'}; 
    int count=0;
    printf("%s\n",name);
    for (int j=0;j<11;j++){
        //checks for vowels 
        if(name[j]=='a'|| name[j]=='e'|| name[j]=='i'|| name[j]=='o'||name[j]=='u')
        {
        printf("Vowel: %c\t",name[j]);
        count++;
        }
    }
    printf("No. of vowels: %d",count);
}