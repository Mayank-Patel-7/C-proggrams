#include<stdio.h>
#include<conio.h>
int main(){
    int age=22;
    int *ptr=&age;
    int **ptr=&ptr;
    printf("%u",*ptr);
    getch();
    return 0;
}
