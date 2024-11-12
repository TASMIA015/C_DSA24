//Find greatest no. in array --day9
#include<stdio.h>
#include<stdbool.h>
int main()
{
    int arr[] = {1,4,8,7,5,3};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int x=0; //x=arr[0]/ for negative elements in array 
    for(int i=0;i<n;i++)
    {
        if(arr[i]>x) //arr[i]<x -- smallest element
        {
            x=arr[i];
        }
    }
    printf("%d",x);
}
        