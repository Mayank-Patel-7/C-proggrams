#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int find_x(char str[30]);
    
    char str[30];
    printf("Enter the String : \n");
    gets(str);
    
    find_x(str);
    
    getch();
    return 0;
}

    int find_x(int str[30])
    {
         char i;
         int count;
         for(i=0;str[i]<='\0';i++)
         {
                             if ( str[i]=='x'||'X')
                             {
                                  count++ ;
                             }
         }
         return count;
    }
    
    
    
