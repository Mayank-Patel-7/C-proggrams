#include<stdio.h>
#include<conio.h>
int main()
{
    int age;
    printf("Enter age: ");
    scanf("%d",&age);
    
    if(age>=18)
    {
        printf(" You are Eligible for Voting");         
    }
    else
    {
        printf(" You are Not Eligible for Voting");
    }
    getch();
    return 0;
}
