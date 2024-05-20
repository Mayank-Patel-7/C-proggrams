#include<stdio.h>
#include<conio.h>

union data
{
      int integer;
      float point;
      char character;
}u;

int main()
{
    union data;
    
    printf("Enter the Integer : \n");
    scanf("%d",&u.integer);
    
    printf("Enter the point : \n");
    scanf("%f",&u.point);
    
    getch();
    return 0;
}
