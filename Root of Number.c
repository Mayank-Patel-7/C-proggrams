#include<stdio.h>
#include<conio.h>

int main()
{
    int root(int n);
    int n1;
    int n;
    float r;
    printf("Enter the Number Whose you Want to Square Root :\n");
    scanf("%d",n1);
    
    r = root(n);
    printf("Square root of No. is %f",&r);
    getch();
    return 0;
}

    int root(int n)
    {   
    
        float r;
        
                         r = n*(0.5);
        
        return r;
    }
