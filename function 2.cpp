#include<stdio.h>
#include<conio.h>

int pow();
int fact();
int main()
{
    int i,m,n;
    float sum;
    printf("Enter N number : ");
    scanf("%d",&n);
    
    for( i=1; i<=n; i++)
    {
         sum= sum(pow(m,n)/fact(i));
    }
    printf(" sum is %d ",sum);
    getch();
    return 0;
}

    int pow(int m, int n);
    {
        int p=1;
        for(i=1;i<=n;i++)
        {
                         p=p*m;
        }
        ruturn p;
    }
    
    int fact(int n)
    {
        int i, f=1;
        for(i=1;i<=n;i++)
        {
                         f=f*n;
        }
        return f;
    }
    
    
