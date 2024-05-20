#include<stdio.h>
#include<conio.h>

int main()
{
    int a,b;
    void swap(int *a,int *b);
    printf("Enter a & b  :  ");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    getch();
    return 0;
    
}

void swap(int *a,int *b)
{
     int t;
     t=*a;
     *a=*b;
     *b=t;
     printf(" a=%d\n b=%d\n",&a,&b);
}
