#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[20];
    printf("Enter the String : \n");
    gets(str);
    
    strrev(str);
    printf("Reverse of String = %s ", str);
    
    getch();
    return 0;
}
    
