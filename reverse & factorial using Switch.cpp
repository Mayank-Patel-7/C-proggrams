#include<stdio.h>
#include<conio.h>

int main()
{
    int ch,n,real,rev,eo,n1,f,i,r;
    
    printf("Enter 1 for reverse no. \n Enter 2 for check weather no. is even or Odd \n Enter 3 factorial  : \n");
    scanf("%d%",ch);
    
    switch(ch)
    {
    case 1: printf("Enter the no.");
            scanf("%d",&n);
            real = n;
            while(n!=0)
            {
            r=n%10;
            rev=(rev*10)+r;
            n=n/10;
            }
            printf(" reverse of %d  is %d\n",real,rev);
            break;
            
    case 2: printf("Enter the no. \n");
            scanf("%d",&eo);
            if(eo%2==0)
            printf("The No.is Even NO. \n");
            else 
            printf("The NO.is Odd NO. \n");
            break;
            
    case 3: printf("Enter n Number of Factorial");
            scanf("%d",&n1);
            for(i=1;i<=n1;i++)
            {
                              f=f*i;
            }
            printf("Factorial of no. is %d \n");
            break;
    default:printf("You have Entered wrong choice");
}
getch();
return 0;
}
            
