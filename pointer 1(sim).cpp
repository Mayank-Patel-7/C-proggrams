#include<stdio.h>
#include<conio.h>

int main()
{
    int age=22;
    int *ptr=&age;
    int **pptr=&ptr;
    
    printf("%d\n",age);
    printf("%d\n",*ptr);
    printf("%d\n",*(&age));
    printf("%d\n",**pptr);
    getch();
    return 0;
}
