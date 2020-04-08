#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
#include <string.h>

void main()
{ char str[80];
  char c=' ';
 int len;
 //ввод и печать из стандартного потока
 fgets(str,78,stdin);
 puts(str);	

 //если в потоке есть строка 
  if(str!=" ")
  {
  	len=strlen(str);    //
  	printf("%i\n",len);//  длина вводимого слова
  	  for(int i=0;i<=len-1;i++)
  	  {
  	   if(str[i]!=c)//если не пробел печатаем гистограмму 
       { str[i]='*' ;
        printf("%c",str[i]);
       }
       else printf(" ");
           
  	  }    
  } printf("\n");

}