#include<stdio.h>
#include<conio.h>
#include<string.h>

void removeSpaces(char *str){
     int len = strlen(str);
     int count = 0;
     
     for (int i = 0; str[i]; i++) {
         if(str[i] != ' '){
                   str[count++] = str[i];
         }
     }
     str[count] = '\0';
}

int main(){
    char input[100];
    
    printf("Enter a String : ");
    fgets(input, sizeof(input), stdin);
    
    removeSpaces(input);
    
    printf("String after removing spaces : %s\n", input);
    
    getch();
    return 0;
}
