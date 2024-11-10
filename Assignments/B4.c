#include<stdio.h>
void main()
{
    int score;
    printf("Enter the score:\n");
    scanf("%d",&score); //Prompts the user to input the score
    switch(score)
    {
        //checks the cases and prints the output based on the input score
        case 90 ... 100:
        printf("Grade A");
        break;
        case 80 ... 89:
        printf("Grade B");
        break;
        case 70 ... 79:
        printf("Grade C");
        break;
        case 60 ... 69:
        printf("Grade C");
        break;
        default:
        printf("Grade F");
        }
}