#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    int per[4];
    float p,total=0;
    printf("Enter the marks of 5 subjects : ");
    
    for(i=0;i<=4;i++)
    {
                     scanf("%d",&per[i]);
    
                     total= total+per[i];
    
                     
    }
    p=(total)/5;
    printf(" Percentage = %d",p);
    getch();
    return 0;
}
    
