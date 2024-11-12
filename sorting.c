#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[] = {9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr) / sizeof(arr[0]); //length of array
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
            /*if (arr[i]<arr[j])
            {
                //swap
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            } descending order*/   
        }
        printf("%d ",arr[i]);//ascending order
    }
    return 0;   
}