#include<stdio.h>
#include<conio.h>

int main()
{   
    int arr[10],i,*p;
    p=&arr[0];
    
    printf("Enter the Array : ");
    for(i=0;i<10;i++){
                      scanf("%d",&arr[i]);
                      }
                      
    printf("Entered Elements are : \n");
                    for(i=0;i<10;i++){
                                      printf("%d",*p);
                                      p++;
                                      }
    getch();
    return 0;
    
}

    int swap(int *c, int *d){
        //int t=*c;
//        *c=*d;
//        *d=t;
//     
       return *c+*d;  
        }
