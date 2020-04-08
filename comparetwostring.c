
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define true 1
#define false 0
void main(void)
{ char str[]="Hello";
  char str1[]="World";
  char str3[7];
  char str4[7];
  char sum;
  size_t sum2;
  int bool;
  //посмотрим длину строки и размер в битах;
  sum=strlen(str);
  sum2=sizeof(str);
  printf("%i\r\n",sum);
  printf("%lu\r\n",sum2);

  sum=strlen(str1);
  sum2=sizeof(str1);
  printf("%i\r\n",sum);
  printf("%lu\r\n",sum2);

  //попробуем ввести еще строки из стандартного потока
  fgets(str3,7,stdin);
  puts(str3);
  
  //если строки равны выводим равны ,иначе не равны
  if (strcmp(str,str1) ==0)
  {
	printf("equal\r\n");

  }
  
  else
  {
  	printf("not equal\r\n");
  }
  //сверим строку1 с алвафитом 
     for(int i=0; i<=sum;i++)
     {	
    	if(isalpha(str[i]))
    	{
    		bool=true;
    		printf("This bool %i and %c is letters\r\n",bool,str[i]);

    	}	
    	
     } printf("\r\n");
  //сверим строку2 с алвафитом    
     for(int i=0; i<=sum;i++)
     {	
    	if(isalpha(str1[i]))
    	{
    		bool=true;
    		printf("This bool %i and %c is letters\r\n",bool,str1[i]);

    	}	
    	

    }
    
	return ;
}
