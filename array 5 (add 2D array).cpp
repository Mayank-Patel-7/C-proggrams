#include<stdio.h>
#include<conio.h>

int main()
{
    int a[1][1],b[1][1],c[1][1],i,j,k;
    printf("Enter the values of first Array : \n");
    for(i=0;i<=1;i++)
    {
                     for(j=0;j<=1;j++)
                     {
                                      scanf("%d",&a[i][j]);
                     }
    }
    for(i=0;i<=1;i++)
    {
                     for(j=0;j<=1;j++)
                     {
                                      printf("%d",a[i][j]);
                     }printf("\n");
    }


 //printf("Enter the values of second Array : \n");
//    for(i=0;i<=1;i++)
//    {
//                     for(j=0;j<=1;j++)
//                     {
//                                      scanf("%d",&b[i][j]);
//                     }
//    }
//    
//
//
//printf("Addtion of two Array \n");
//for(i=0;i<=1;i++)
//{
//                 for(i=0;i<=1;i++)
//                 {
//                                  c[i][j]=0;
//                                  for(k=0;k<=1;k++)
//                                  {
//                                                   c[i][j]=c[i][j]+a[i][j]+b[i][j];
//                                  }
//                 }
//
//}
//
//printf("Lets display Result");
// printf("Enter the values of first Array : \n");
//    for(i=0;i<=1;i++)
//    {
//                     for(j=0;j<=1;j++)
//                     {
//                                      printf("%d",&c[i][j]);
//                     }printf("\n");
//    }//printf("\n");
    getch();
    return 0;
    
}


