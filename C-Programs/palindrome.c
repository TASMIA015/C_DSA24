//day8
#include<stdio.h>
void main(){
//palindrome code
int f=121,x=0,y=0,a=f;
while(f>0){
    x=f%10;
    y=(y*10)+x;
    f=f/10;    
} 
if(a==y)
{
    printf("Palindrome");
}
else
{
    printf("Not a Palindrome");
}
}