// day5 (pointer to pointer)
#include<stdio.h>
void main()
{
    int t =700;
    int *ptr=&t; // address of t
    int **pptr=&ptr; // stores address of *ptr
    printf("%d\t%d\t%d\n",t,*ptr,**pptr); //3 ways of accessing same value
    (*ptr)++;
    printf("%d\t%d\t%d\n",t,*ptr,**pptr);

    printf("%x\t%x\n",ptr,&t); //address of ptr & t-same

    printf("%x\t %x\n",&ptr,*pptr); // value & address of ptr

    printf("%x\t %x\n",&ptr,pptr); //both - address of ptr

    pptr=NULL; // delink pptr from t (null/wild pointer)
    printf("--------------------\n"); 
    printf("t=%d\n",t);
    printf("*ptr=%d\n",*ptr);
    printf("**pptr=%d",**pptr); //(pptr delinked from p - dangling pointer)

}
