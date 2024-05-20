#include<stdio.h>
#include<conio.h>

int main()
{
    int s,arr[s],i,sum=0;
    printf("Enter the size of Integer : \n");
    scanf("%d",s);
    for(i=1;i<=s;i++)
    {
                     printf("%d\t",arr[i]);
                     sum=sum+arr[i];
    }
    printf("Sum of all Elemants = %d",s);
    getch();
    return 0;
}
