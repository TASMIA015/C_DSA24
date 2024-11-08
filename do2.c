//day3
#include<stdio.h>
void main()
{
    int a=5,b=15;
    do{
        do{
            b--;
        } while(b>=5);
        a++;
    }while(a<=b);
    printf("%d\n",a*b);
}
