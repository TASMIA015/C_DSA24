#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the number:");
    scanf("%d",&n); //Reads the user input
    if(n<=1){
        //1 is not prime because it only has one divisor(itself)
        printf("No\n"); 
    }else{
        i=2;
        while(i*i<=n){ //checks divisibility upto root n
            if(n%i==0){ // if divisible, n is not prime
                printf("No\n");
                return 0;
            }
            i++;
        }
        printf("Yes\n");//if no divisor found , n is prime
    }
    return 0;
}
    
