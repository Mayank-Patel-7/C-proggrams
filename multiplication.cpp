#include<stdio.h>
int main()
{
    //input 5
    int n,i;
    printf("Enter any Number: ");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
         printf("%d*%d=d\n",n,i,n*i);
    }
    return 0;
}
