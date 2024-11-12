//day7
//String manipulation functions

#include<stdio.h>
#include<string.h>
void main()
{
    char arr[15]={'C','i','t','y',' ', 'C','o','l','l','e','g','e','\0'}; 
    printf("%s\n",arr);
    //counts the no. of characters and stores the count into length
    int length= strlen(arr); 
    printf("Length:%d\n", length);
    //concatenates str1 and str2 , result is stored in str1
    char str1[]="City Engineering";
    char str2[]=" College";
    strcat(str1,str2);
    printf("Concatenated string: %s\n",str1);  
}
