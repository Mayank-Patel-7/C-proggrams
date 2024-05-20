#include<stdio.h>
#include<conio.h>

int fib(int n);

int main(){
    int n;
printf("Enter the no till you have to print fibonachii :");
scanf("%d",&n);
fib(3);
getch();
return 0;
}

int fib(int n){
int fibN1,fibN2;
    if(n==0){
             printf("0");
             }
             else if(n==1){
                  printf("1");
                  }
                  
                  fibN1 = fib(n-1);
                  fibN2 = fib(n-2);
                  int fibN = fibN1 + fibN2;
                  printf("fib of %d is : %d \n",n,fibN);
                  return fibN;
                  }
