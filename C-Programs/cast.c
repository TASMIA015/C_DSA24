//day2
#include<stdio.h>
void main()
{
    int i=100,j=2,c=i/2;
    float f =3.4; // 3.4 is double by default, auto-converted to float
    float t=5.4f; // float value
    float o=100.00F;
    printf("%.2f\n",(o/j)); // widening conversion(low-high)

    //narrowing conversion(high-low)-data loss
    int n=f;
    printf("%d\n",n);

    int n1=100;float f1=(float)n1; // type-casting
    printf("%.2f\n",f1);
}
