#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j;
    for(i=1;i<5;i++)   //rows
    {
         for(j=1;j<=5;j++)   //columns
         {
             printf("*");
         }
         printf("\n");
    }
    getch();
    return 0;
}
