#include<stdio.h>
#include<conio.h>

int sum(int n);

int main(){
    //printf("sum is : %d",sum(5));
    getch();
    return 0;
}
int sum(int n){
    if(n==1){
             return 1;
             }
             int sumNm1=sum(n-1);
             int sumN=sumNm1+n;
             printf("sum is : %d",sum(5));
             return sumN;
             }
             
