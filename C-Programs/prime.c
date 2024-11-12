// Day8--check if Prime numbers are divisible.
#include<stdio.h>
#include<stdbool.h>
void main(){
    bool b=true;
    int a=21;
    for(int i=2;i<a;i++){
        if(a%i==0){
            b=false;
            break;
        }
    if(b==true)
        printf("Prime number");
    
    else
        printf("Not a Prime number");
}
}