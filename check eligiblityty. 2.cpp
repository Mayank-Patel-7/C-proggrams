#include<stdio.h>
int main()
{
    int age ;
    printf("Enter the Age: ");
    scanf("%d",age);
    
    if(age>=18)
    {
        printf("Person is Eligible to vote");   
    }
    
    else
    {
        printf("Person is not Eligible to vote");
    }
    return 0;
}
