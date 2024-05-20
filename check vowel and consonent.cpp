#include<stdio.h>
#include<conio.h>

int main()
{
    int ch;
    printf("Enter any Character of Alphabates \n");
    scanf("%c",&ch);
     
    if(ch=='a'||ch=='A')
    printf("It is vowel \n");
    
    else if(ch=='e'||ch=='E')
    printf("It is vowel \n");
    
    else if(ch=='i'||ch=='I')
    printf("It is vowel \n");
    
    else if(ch=='o'||ch=='O')
    printf("It is vowel \n");
    
    else if(ch=='u'||ch=='U')
    printf("It is vowel \n");
    
    else
    printf("It is not vowel \n");
    
    getch();
    return 0;
}
