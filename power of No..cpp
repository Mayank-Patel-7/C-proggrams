#include<stdio.h>
#include<conio.h>

int main()
{
    int m,n,pow=1;
    printf("Enter the base and its power \n");
    scanf("%d%d",&m,&n);
    
    do
{
    pow=pow*m;
    n--;
}while(n>0);
printf("Result = %d \n",pow);
getch();
return 0;
}
