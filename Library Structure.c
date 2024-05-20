#include<stdio.h>
#include<conio.h>

struct book
{
      char title[200];
      char author[50];
      int pages;
}l;

int main()
{
    struct book l [3];
    int i;
    for(i=1;i<3;i++)
    {
            printf("Enter the Details of Book \n Title of Book :\n Authors Name :\n Pages :\n");
            scanf("%s%s%d",&l[i].title,&l[i].author,&l[i].pages);
    }
    getch();
    return 0;
}
