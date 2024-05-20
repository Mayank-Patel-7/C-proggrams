#include<stdio.h>
#include<conio.h>

int main()
{
    int n=4;
    void square(int *n);
    square(&n);
    printf("%d\n",n);
    getch();
    return 0;
}
void square(int *n)
{
     *n = (*n) * (*n);
     printf("%d\n",*n);
}
