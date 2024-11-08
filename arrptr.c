//day5
#include<stdio.h>
void main()
{
    int numbers[5]={100,23,56,278,10};
    printf("%d\n",numbers[0]);
    printf("%d\n",numbers[1]);
    printf("%d\n",*(numbers+2)); //implementing a pointer
    printf("%d\n",numbers[4]+2*2);
    printf("%d\n",numbers[0]+2*2);
    numbers[3]=800;
    *(numbers+2)=1000;
    printf("%d\n%d\n",numbers[3],*(numbers+2));
}
