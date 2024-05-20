#include<stdio.h>
int main() 
{
    int c,l,b,p,a;
    l=7;
    b=5;
    
    printf("enter p for perimeter and a for area : ");
    scanf("%d",&c);
    
    if(p)
    {
    p=2*(l+b);
    printf("perimeter of rectangle : %d",&p);
    }
    else if(a)
    {
    a=l*b;
    printf("area of rectangle : %d",&a);
    }
    return 0;
}
