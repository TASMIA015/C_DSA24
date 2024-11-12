//day7- Structures

#include<stdio.h>
//Structure definition
struct student{
    int USN;
    char Name;
    char Course;
    int Sem;
    float Fees;
};
//here, student is a data type, s is a composite variable
struct student s; //global
void main()
{
    printf("USN:%d\n",s.USN=21);
    printf("Fees:%.2f\n",s.Fees=523780.761);
}