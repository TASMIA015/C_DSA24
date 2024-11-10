// day 6
#include<stdio.h>
void main()
{
    int arr[]={4,5,6,200,13,7};
    arr[1]=30;
    int *p=&arr[0];
    //both point to the same location
    printf("%d\n",arr[0]); 
    printf("%d\n",*p);
    printf("%d\n",*(p+3)); // or arr[3] 
    //prints the address of 1st element in the array
    printf("%x\n",p); 
    printf("%x\n",arr);
    printf("%x\n",&arr[0]);
    printf("%d\n",*(p+5)); // arr[5]
    printf("p=%x\n",*p);
    p++;
    printf("%x\t%d\n",p,*p);
    p=p+3;
    printf("%x\t%d\n",p,*p);
    p-=2;
    printf("%x\t%d\n",p,*p);
}