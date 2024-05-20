#include<stdio.h>
#include<conio.h>
int main()
{
    // 0 1 1 2 3  5 8 .....N
    int n,a=0,b=1,c,i;
    printf("Enter number of Term...\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         c=a+b;
         printf("%d\t",c);
         a=b;
         b=c;
    }
    getch();
    return 0;
}
