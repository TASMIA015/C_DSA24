//day7
#include<stdio.h>
#include<string.h>
int main()
{
    char str[15]={'H','e','l','l','o',' ' ,'W','o','r','l','d','\0'}; 
    printf("%s\n",str);
    int count=0;
    //Prints the length using for-loop
    for(int i=0;i<11;i++)
    {
        count++;
    }printf("Length:%d\n",count);   
    return 0;
}