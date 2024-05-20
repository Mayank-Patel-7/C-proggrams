#include<stdio.h>
#include<math.h>
int main()
{
     float p,r,t,CI;
     printf("Enter Principal Rate Time ");
     scanf("%f%f%f",&p,&r,&t);
     CI=p*(pow((1+r/100),t));
     printf("CI %f",CI);
     return 0;
}
