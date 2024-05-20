#include<stdio.h>
#include<conio.h>
int main(){
int age = 17;
int *ptr = &age;

printf("%u\n",*ptr);
printf("%d\n",&age);
getch();
return 0;
}
