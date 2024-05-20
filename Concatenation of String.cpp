#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    char str1[40],str2[20];
    
    printf("Enter the value of First String :\n");
    gets(str1);
    
    printf("Enter the value of Second string :\n");
    gets(str2);
    
    strcat(str1, str2);
    
    printf("Concatenated String is \n %s",str1);
    getch();
    return 0;
}
