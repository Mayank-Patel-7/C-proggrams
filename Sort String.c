#include<stdio.h>
#include<conio.h>

void sortString ( char*arr[],int n)
{
     int i,j;
     char*temp;
     for(i=0;i<n-1;i++)
     {
                       for(j=i+1;j<n;i++)
                       {
                                          if(strcmp(arr[i],arr[j]>0))
                                          {
                                                                     temp=arr[i];
                                                                     arr[i]=arr[j];
                                                                     arr[j]=temp;
                                          }
                       }
     }
}

int main()
{
    char*strings[]={"Banana","Apple","Orange","Grapes"};
    int i,n=5;
    
    printf("Before Sorting String \n");
                   for(i=0;i<n;i++)
                   {
                                   printf("%s\n", strings[i]);
                   }
                   sortString(strings,n);
    printf("After Sorting String \n");
                   for(i=0;i<n;i++)
                   {
                                   printf("%s\n", strings[i]);
                   }
                   
    getch();
    return 0;
                   
}
