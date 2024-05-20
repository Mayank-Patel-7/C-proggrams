#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b,c;
    printf("Enter a , b & c \n");
    scanf("%d%d%d",&a,&b,&c);
     
    if(a>b)
    {
           if(a>c)
           printf("a is Greatest no.\n");
           else
           printf("c is Greatest no.\n");
    }
    
    else if(b>a)
    {
         if(b>c)
         printf("b is Greatest no.\n");
         else
         printf("c is Greatest no.\n");
    }
    
    getch();
    return 0;
}
