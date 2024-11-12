//day9
#include<stdio.h>
int main(){
    for (int i=0;i<20;i++)
    {
            if(i<10){
                if(i%2==0){ //prints even no. <10
            printf("%d ",i);
            }
            }
            if(i>10){
                if(i%2==1){ //prints odd no. >10
                printf("%d ",i-10); //subtracts value by 10
                }
            }
    }
}