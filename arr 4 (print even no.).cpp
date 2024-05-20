#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    int arr[4];
    printf("Enter any 5 numbers : \n");
    for(i=1;i<=4;i++)
    {
                     scanf("%d",&arr[i]);
                     if(arr[i]%2==0)
                     printf("%d is even no.\n",arr[i]);
    }
    
    getch();
    return 0;
}
