#include<stdio.h>
#include<conio.h>
int main() 
{
    int sal;double tax;
    printf("Enter the salary of Person:");
    scanf("%lf",&sal);
    
    if(sal<=300000)
    {
         printf("No Tax");  
    }
    else if(sal>300000 && sal<=600000)
    {
         tax=sal*0.05;
         printf("%lf",tax);
    } 
    else if(sal>600000 && sal<=900000)
    {
         tax=sal*0.10;
         printf("%lf",tax);
    }
    else if(sal>900000 && sal<=1200000)
    {
         tax=sal*0.15;
         printf("%lf",tax);
    }
    else if(sal>1200000 && sal<=1500000)
    {
         tax=sal*0.20;
         printf("%lf",tax);
    }
    else if(sal>1500000);
    {
         tax=sal*0.30;
         printf("%lf",tax);            
    }
    getch();
    return 0;
}
