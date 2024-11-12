#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[] = {9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x=0; //smallest element-- int x
    for(int i=0;i<n;i++)
    {
        for(int j =i+1;j<n;j++)
        {
            if (arr[i]>arr[j])
            {
                //swap
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
       }
       if(arr[i]>x) //arr[i]<x -- smallest element
        {
            x=arr[i];
        }

    }
    printf("Largest element in sorted array is : %d",x);
    return 0;
}