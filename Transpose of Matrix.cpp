#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[3][3],trans_arr[3][3],i,j;
    printf("Enter the Elements in Array : \n");
    for(i=0;i<3;i++)
    {
                    for(j=0;j<3;j++)
                    {
                                    scanf("%d",&arr[i][j]);
                    }
    }
    
    printf("\n Elements in Array are : \n");
    for(i=0;i<3;i++)
    {               for(j=0;j<3;j++)
                    {
                                    printf(" %d ",arr[i][j]);
                                    trans_arr[j][i]=arr[i][j];
                    }printf("\n");
    }
    
    printf("Transpose of Matrix : \n");
    for(i=0;i<3;i++)
    {
                    for(j=0;j<3;j++)
                    {
                                    printf(" %d ",trans_arr[i][j]);
                    }
                    printf("\n");
    }
    getch();
    return 0;
}
    
