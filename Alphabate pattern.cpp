#include<stdio.h>
#include<string.h>
main()
{
      char str[]="INDIA";
      int i,j,len;
      len=strlen(str);
      for(i=0;i<len;i++)         
      {
           for(j=0;j<=i;j++)
           {
                printf("%c",str[j]);
                
           }
           printf("\n");
      }
      
}
