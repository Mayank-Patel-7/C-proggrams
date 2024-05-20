#include<stdio.h>
#include<conio.h>

int main()
{
    int n,rev=0,a,real;
    printf("Enter the number : \n");
    scanf("%d",&n);
    real=n;
    
    for( ;n!=0; )
    {
        // a=n%10;           
//         rev=(rev*10)+a;
//         n=n/10;
    }
    printf("Reverse of %d is %d",real,rev);
    getch();
    return 0;
}
         
