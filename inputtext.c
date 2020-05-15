#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAB 4
void simpTab(char *str, char *point);
void Tab(char *str1, char *point1);
void main() 
{ char str[80], *p;
  char ch='\0';
  char symb='|';
  int num;
//--------------- ------------------- ---- 
  /*Просто замена табуляции на символ */  
printf( "vvedite stroku ");
fgets(str,80,stdin); 
 printf("vvedite variant");
 scanf("%d",&num);
  
  switch(num)
  {
    
  case 1:
       simpTab(str, p);
   break;
  case 2:
       Tab(str,p);
   break;
 }
//---------------------------------------   
  //
} 	
//---Вывод символа табуляции или просто печать--
void simpTab(char *str, char *point)
{
  
  char ch='\0';
  char symb='|';
  point=str;
   for (int i=0;i<strlen(str) && !ch;i++)
   { 
     if(*(point+i)=='\t')
     {
      printf("%c",symb);
     }
     else 
     {
     printf("%c",*(point+i));
     } 
   }

}
//----Вывод вместо пробелов табуляции----
void Tab(char *str1, char *point1)
{ char ch='\0';
  point1=str1;
  char c;
   for (int i=0;i<strlen(str1) && !ch;i++)
   { 
     if(*(point1+i)=='\t')
     {
      for(int j=0;j<=TAB-1;j++)
      {
         c='|';
         printf("%c",c);
      }
     }
     else 
     {
     printf("%c",*(point1+i));
     } 
   }  
}