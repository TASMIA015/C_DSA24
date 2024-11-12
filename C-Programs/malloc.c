#include <stdio.h>
#include <stdlib.h>

int main() {
    int a;
    printf("Enter size: ");
    scanf("%d", &a);

    int *arr = (int *)malloc(a * sizeof(int));
    if (arr == NULL) { // Check if memory allocation was successful
        printf("Memory allocation failed\n");
        return 1;
    }

    arr[2] = 20;
    arr[0] = 200;

    printf("%d\n", arr[0]);

    free(arr);
    return 0;
}