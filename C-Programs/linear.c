//day 9
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[] = {5, 7, 2, 8, 4, 9, 10};
    int x = 18;
    int n = sizeof(arr) / sizeof(arr[0]); //length of array
    bool b = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            b=true;
        }
    }if (b) {
        printf("Element found\n");
    }else{
        printf("Element not found\n");
    }
    return 0;
}
