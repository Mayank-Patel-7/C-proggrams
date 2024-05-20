#include<stdio.h>
int main()
{
    int cp,sp,p,l;
    printf("Enter the cost price ");
    scanf("%d",cp);
    
    printf("Enter selling price ");
    scanf("%d",sp);
    
    p=sp-cp;
    l=cp-sp;
    
    if(sp=cp)
    {
         printf("No profit no loss");
    }
    else if(sp>cp)
    {
         printf("Profit = %d",p);
    }
    else if(sp<cp)
    {
         printf("Loss = %d",l);
    }
    return 0;
}
