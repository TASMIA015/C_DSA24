//day2
#include <stdio.h>

int main() {
    int a;
    printf("Enter a: \n");
    scanf("%d", &a);

    if (a < 10) {
        printf("%d is less than 10\n", a);
    } else {
        printf("a is greater than or equal to 10\n");
    }

    // odd or even
    if (a % 2 != 0) {
        puts("a is an odd number");
    } else if(a%2==0){
        puts("a is an even number");
    }
    return 0;
}
