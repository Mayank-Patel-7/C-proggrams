#include<stdio.h>
int findmax(int *ptr1, int *ptr2){
    if(*ptr1 > *ptr2){
             return *ptr1;
             }else{
                   return *ptr2;
                   }
}
int main(){
    int num1, num2;
    printf("Enter any two numbers : ");
    scanf("%d %d",&num1, &num2);
    int *ptr1 = &num1;
    int *ptr2 = &num2;
    
    int max = findmax(ptr1, ptr2);
    printf("the maxium number is  :  %d\n",max);
    
    return 0;
}
