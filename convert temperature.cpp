#include<stdio.h>
#include<conio.h>

float convertTemp(float celsius);

int main(){
    float f;
    printf("Enter temperature in celsius : \n");
    scanf("%f",&f);
    float far = convertTemp(f);
    printf("%f\n",far);
    getch();
    return 0;
}

float convertTemp(float celsius){
      float far = celsius*(9.0/5.0)+ 32;
      return far;
      } 
      
