//day3
#include<stdio.h>
void main()
{
    int i=5,j=15;
    do{ 
        while(j>=5){ // 11 loops until j=4
            j--;
        }
        i++;
    }while(i<=j); 
    printf("%d",i*j);
}
