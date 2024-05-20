#include<stdio.h>
#include<conio.h>
 int main()
{
     //input n=10
     //output 1+2+3+4+5+6+7+8+9+10=55
     
     int n,i,sum=0;
     printf("Enter Number:");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
             sum=sum+i;         
     }
     printf("sum of N natural number: %d",sum); 
     getch();
     return 0;
} 
