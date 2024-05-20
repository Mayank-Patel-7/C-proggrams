#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str[20];
    printf("Enter the String : ");
    gets();
    
    printf("Reverse String is : ",strrev(str));
    getch();
    return 0;
    
}
