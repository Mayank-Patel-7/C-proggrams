#include<stdio.h>
#include<conio.h>

int main()
{
    int great(int arr);
    int arr[7];
    int r,i,g=0;
    printf("Enter the Numbers : \n");
    for(int i = 1;i<=7;i++){
    scanf("%d",&arr[i]);
    }
    
    for(i=1;i<=7;i++)
        {
                         if(arr[i]> g){
                                    g=arr[i];
                                    }
        }
    

    printf("The greatest Number is : %d ",g);

    getch();
    return 0;
}
//
//    int great(int arr)
//    {
//        int i,g=0;
//        for(i=1;i<=7;i++)
//        {
//                         if(arr[i]> g){
//                                    g=arr[i];
//                                    }
//        }
//        return g;
//    }
