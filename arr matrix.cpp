#include<stdio.h>
#include<conio.h>

int main()
{
int arr[2][2],i,j;
printf("Enter the values for Matrix : \n");
for(i=0;i<2;i++)
{
                 for(j=0;j<2;j++)
                 {
                                  scanf("%d",&arr[i][j]);
                 }
}
printf("The Matrix formate of Elements is :\n");
for(i=0;i<2;i++)
{
                 for(j=0;j<2;j++)
                 {
                                  printf("%d",arr[i][j]);
                 }printf("\n");
}
getch();
return 0;
}
