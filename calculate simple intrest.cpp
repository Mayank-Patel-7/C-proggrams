#include<stdio.h>
int main()
{
    float amt,rate,time,si;
    printf("Enter the amount");
    scanf("%d",&amt);
    printf("Enter the rate");
    scanf("%d",&rate);
    printf("Enter the time");
    scanf("%d",&time);
    si=(amt*rate*time)/100;
    printf("simple intrest=%f",si);
}
