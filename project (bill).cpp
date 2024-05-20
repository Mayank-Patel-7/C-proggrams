#include<stdio.h>
#include<conio.h>

    struct user
    {
           char name[20];
           int mobile;
    }u;
    
    int main()
    {
        struct user u;
        printf("For next Step Enter \n Your Name : ");
        gets(u.name);
        printf("\n Enter your Mobile NO. : ");
        scanf("%d",&u.mobile);
    }
    
    void bill( int a )
    {
       int i, stored_choice,value,stored_choice_price,bill=0;
       for(i=0;i<=100;i++)
       {
                          if( i== stored_choice)
                          value = stored_choice_price ;
                          bill = value + bill; 
       }
       printf(" Your Total Bill =  %d  ",bill);
       
    }
    
    
