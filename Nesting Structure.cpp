#include<stdio.h>
#include<conio.h>

struct address
{
       char house[50];
       char street[50];
       char city[20];
}a;

struct student 
{
       int roll;
       char name[20];
       int age;
       struct address a;
}s;

int main()
{
    struct student s;
    
    printf("Enter the Data \n Enrollment no. :\n Name :\n Age :\n Address(house,street,city) :\n");
    scanf("%d%s%d%s%s%s",&s.roll,&s.name,&s.age,&s.a.house,&s.a.street,&s.a.city);
    
    getch();
    return 0;
}
