#include<stdio.h>
int main()
{
    int units;
    float billamt=0;
    printf("Enter units consumed:\n");
    scanf("%d",&units); //takes user input
    switch(units/100){
        case 0 ... 100 : //0-100 units
          billamt=units*5;
          break;
        case 101 ... 200: //101-200 units
          billamt=(units*5)+(units-100)*8;
          break;
        default:  //>200 units
          billamt=(100*5)+(100*8)+(units-200)*10;
          break;
    }
    printf("The total electricity bill amount is:%.2f\n",billamt);
    return 0;
}