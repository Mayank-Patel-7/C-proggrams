#include<stdio.h>
#include<conio.h>

int main()
{
    float area;int r;
    printf("Enter Radius of Circle : \n");
    scanf("%d",&r);
    area=3.14*(r*r);
    printf("Area of Circle = %f \n",area);
    getch();
    return 0;
}
