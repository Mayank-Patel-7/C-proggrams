#include<stdio.h>
#include<conio.h>
#include<string.h>

void remove_space(char *str)
{
     int i,j;
     int l = strlen(str);
     
     for(i=0;i<l;i++)
     {
                     if(str[i]!=' ')
                     {
                                  str[j++]=str[i];
                     }
     }
                     str[j]='\0';
}

int main()
{
    char str[50];
    
    printf("Enter the String : \n");
    gets(str);
    printf("Howareyou");
    //remove_space(str);
    
    //printf("String After Removing Spaces is \n %s",str);
    getch();
    return 0;
}
