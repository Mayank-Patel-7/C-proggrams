#include<stdio.h>
#include<conio.h>

struct student
{
       char name[10];
       int roll_no;
       float marks;
}s;

int main()
{
    struct student s;
    printf("Enter the Data of Student like \n Name : \n Enrollment no. : \n Percentage : \n");
    scanf("%s%d%f",&s.name,&s.roll_no,&s.marks);
    
    printf("Your Data is \n Name : %s \n Enrollment No. : %d \n Percentage : %f \n ",s.name,s.roll_no,s.marks);
    
    getch();
    return 0;
}
