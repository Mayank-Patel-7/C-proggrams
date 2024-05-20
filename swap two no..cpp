#include<stdio.h>
#include<conio.h>

int main()
{
    int swap(int a, int b);
    int a,b,t;
    printf("Enter The no. a & b \n");
    scanf("%d%d",&a,&b);//swap(a,b));&a,&b);
    printf("a = %d ,b=%d \n ",a,b);
//    
    int swap(int a ,int b);
    
    printf("a = %d ,b= %d \n ",b,a); //swap(a,b));
    getch();
    return 0;
}

int swap(int a, int b )
{
    int t;
    t=a;
    a=b;
    b=t;
    return ( a,b );
}
