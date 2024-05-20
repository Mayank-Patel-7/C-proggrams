#include<stdio.h>
#include<conio.h>

void in(int *n)
{
     (*n)++;
}

int main()
{
    int n=10;
    printf("Number before Increment %d\n ",n);
    in(&n);
    printf("Number after Increment %d",n);
    getch();
    return 0;
}
