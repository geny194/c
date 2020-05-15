#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MaxLine 1000 
#define AC_RED  "\x1b[31m"
#define AC_GREEN  "\x1b[32m"
#define AC_YELLOW  "\x1b[33m"
#define AC_BLUE  "\x1b[34m"
#define AC_MAGENTA  "\x1b[35m"
#define AC_Cyan  "\x1b[36m"
#define AC_RESET "\x1b[0m"



//int getline(char *str,int MaxLine);

//если больше 10 символов печатаем,в противном случаее сообщение +макросы цвета
void main()
{
  int len;
  int max=10; 
  char str[MaxLine];
  char c;
char line[MaxLine];


printf(AC_Cyan "vvedite stroku " AC_RESET);
scanf("%s",str);


    if(strlen(str)>max)
    {
     printf("%s\n",str);	
    }
    else printf(AC_RED"less then maximum"AC_RESET);
 

}