//day10
#include <stdio.h>
#include <stdbool.h>

struct AP{  
    int area;
    int peri;
};
int circle() {
    struct AP a;
    float pi=3.14,r=12.5;
    a.area = pi*r*r; //490
    a.peri=2*pi*r*r; //981
    printf("area:%d\t peri:%d\n", a.area,a.peri);
}
int square() {
    struct AP a1;
    int a=20;
    a1.area=a*a; //400
    a1.peri=4*a; //80
    printf("area:%d\t peri: %d\n", a1.area,a1.peri);
}
int rectangle() {
    struct AP a2;
    float l=45.5,b=45.5;
    a2.area=l*b; //2070
    a2.peri=2*(l+b); //182
    printf("area:%d\t peri:%d\n", a2.area,a2.peri);
}
int main()
{
    circle();
    square();
    rectangle();
    return 0; 
}


