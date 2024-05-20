#include<stdio.h>
#include<conio.h>

int main()
{
    void fibo(int);
    int n,i;
    printf("Enter the till you Want Fibo.. : \n");
    scanf("%d",&n);
    
   // for(i=0;i<=n;i++){
//    printf("%d\t",fibo(i));
//}
    
    getch();
    return 0;
}

void fibo(int n){
    if (n<=1)
    {
             //return n;
    }
    else
    {
        printf("%d", (fibo(n-1)+fibo(n-2)));
    }
}
