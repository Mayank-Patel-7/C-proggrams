#include<stdio.h>
#include<conio.h>

void n();
void bo();

int main(){
    int i,b;
    char ch;
    printf("Enter i for INDIAN & f FRENCH\n");
    scanf("%c",&ch);
    
    if(ch=='i'){
    n();
    }
    else if(ch=='f'){
          bo();
         }
         else {
              printf("You have Entered wrong character\n");
              }
              getch();
              return 0;
              }
              
         void n(){
              printf("Namate\n");
              }
    void bo(){
         printf("Bonjour\n");
         }
         
