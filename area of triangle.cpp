#include<stdio.h>
#include<conio.h>
int main(){
    float b,h,a;   //a=area
    printf("Enter Base & Height of a triangle : ");
    scanf("%f%f",&b,&h);
    a=0.5*(b*h);
    printf("%f",a);
    getch();
    return 0;
}
    
