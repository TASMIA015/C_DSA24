//day2
#include<stdio.h>
void main(){
// odd or even using switch case
 int a;
 printf("Enter a: \n");
 scanf("%d", &a);
 switch(a % 2){
    case 0:
          printf("%d is even",a);
          break; // no break- both cases executed
    case 1:
          printf("%d is odd",a);
 }
 return 0;
}
