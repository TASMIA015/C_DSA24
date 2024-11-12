#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8}; // sorted array
    int n = sizeof(arr) / sizeof(arr[0]); // length of array
    int x = 8, l = 0, r = n - 1, m = 0; 
    bool b = false;

    while (l <= r) 
    {
        m = (l + r) / 2;
        if (arr[m] == x)
        {
            b = true;
            break;
        }
        // to shift cursor left or right
        if (arr[m] > x)
        {
            r = m - 1;
        } else {
            l = m + 1;
        }
    }

    if (b) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
