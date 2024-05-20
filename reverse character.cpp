#include<stdio.h>
int main()
{
    char c1='X';
    char c2='M';
    char c3='L';
    
    printf("the reverse of %c%c%c is %c%c%C\n",
           c1,c2,c3,
           c3,c2,c1);
           
    return 0;
}
