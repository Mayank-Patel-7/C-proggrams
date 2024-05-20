#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
    printf("Enter any Number: ");
    scanf("%d",&n);
    
    if(n%2==0)
    {
      printf("Even Number");  
    } 
    else 
    {
      printf("Odd Number");   
    }
    getch();
    return 0;
}
