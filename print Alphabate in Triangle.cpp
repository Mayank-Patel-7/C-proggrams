#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,counter=65;
    for(i=1;i<=3;i++)
    {
                     for(j=1;j<=i;j++)
                     {
                                      printf("%c\t",counter);
                                      counter++;
                     }
                     printf("\n");
    }
    
    getch();
    return 0;
}
