#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d",&n);
    /*checks if the number is between 1-9 and even
    prints english lowercase string for the given integer*/ 
    if(n>=1 && n<=9 && n%2==0)
    {
        char *arr[]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
        printf("%s\n", arr[n-1]);
        printf("Even Number\n");
        }
    //prints the english lowercase string for odd integer 
    else
    {
        char *arr[]={"One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
        printf("%s\n", arr[n-1]);
        printf("Odd\n");
    }
}
