#include<stdio.h>
#include<conio.h>
int main()
{
    //input 234  --->  432
    int n,r;
    printf("Enter Number: ");
    scanf("%d",&n);
    
    while(n>0)
    {
              r=n%10;
              printf("%d",r);
              n=n/10;
    }
    getch();
    return 0;
}
