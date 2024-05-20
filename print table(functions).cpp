#include<stdio.h>
#include<conio.h>
 
 void printTable(int n);

int main(){
    int n;
    printf("Enter the Number \n");
    scanf("%d",&n);
    
    printTable(n);           //Argument/actual parameter
    
    getch();
    return 0;
}

            void printTable(int n){            //Parameter/formal parameter
                 int i;
               for(i=1; i<=10; i++){
                        printf(" %d * %d = %d\n",n,i,i*n);
                        }
                        }
