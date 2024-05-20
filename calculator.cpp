#include<stdio.h>
int main()
{
    float a,b,c;
    char ch;
    printf("Enter the first No: ");
    scanf("%f",&a);
    printf("Enter user choice : ");
    scanf(" %c",&ch);
    printf("Enter second No: ");
    scanf("%f",&b);
    switch(ch)
    {
          case'+' :c=a+b;    
          printf("output = %f",c);
          break;
          case'-' :c=a-b;
          printf("output = %f",c);
          break;
          case'*' :c=a+b;
          printf("output = %f",c);
          break;
          case'/' :c=a/b;
          printf("output = %f",c);
          break;
          default:printf("Invalid opperation");
          break;
    }
    return 0;
}
