// day 9
#include<stdio.h>
#include<stdbool.h>

void main(){

    int a[]={10,25,30,45,55};
    int c=0;
    int n=sizeof(a)/sizeof(a[0]);// n=5. //to find the size of the element ex: a[0]=5 bytes//
    for(int i=0;i<n;i++){
        c=c+a[i];
    printf("%d",c);
    }
    }