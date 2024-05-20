#include<stdio.h>
int main()
{
    int a,b,ch;
    int add,sub,multi,div,rem;
    printf("Enter Two Number:");
    scanf("%d",&ch);
    printf("Enter User Choice:");
    scanf("%d%d",&a,&b);
    
    if(ch==1)
    {
         add=a+b;
         printf("addtion:%d",add);
    }
    else if(ch==2)
    {
         sub=a-b;
         printf("subtraction:%d",sub);
    }
    else if(ch==3)
    {
         multi=a*b;
         printf("multiplication:%d",multi);
    }
    else if(ch==4)
    {
         div=a/b;
         printf("division:%d",div);
    }
    else if(ch==5)
    {
         rem=a%b;
         printf("remainder:%d",rem);
    }
    else
    {
         printf("invalid choice..!");
    }
    return 0;
}
