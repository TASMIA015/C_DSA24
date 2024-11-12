//day1
#include<stdio.h>
void main(){
    int a=10,b=20;
    int c=a + b;
    printf("%d\n",c);
    c=a++ +b;
    printf("\n\nresult : %d",(a + b -- + ++a + a* ++b /5));
}
