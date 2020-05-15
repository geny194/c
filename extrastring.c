#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define pozition 10

void main (void) 
{
  char str[40] ,*p;
  int i,j;
  char c='|';
  char b='_';
  size_t razn;
  printf("Vvedite stroku\n");
 //scanf("%s",str);
  fgets(str,40,stdin);
  p=str;
  
   razn=sizeof(str);


//если длина меньше заданной позиции
      if(strlen(str)<pozition)
      {
        for(i=0;i<=strlen(str) ;i++)        
        {
          	fprintf(stdout,"%c",*(p+i));
          	
        }
      }
//если длина больше позиции      
       else if(strlen(str)>pozition)
          
      {	//проверяем символ табуляция или пробел,если да,то переносим на след сторону 
         	for(j=0; j<=strlen(str);j++)
            { 
             if(*(p+j)==' ')
              {   
              	   printf("\n");
              	  //fprintf(stdout,"%c",c);         	
              }
              //иначе печатаем символ
             else
              {
              	fprintf(stdout,"%c",*(p+j));
              }	
              //если позиция переносим все что провее позиции на новую строку
              if(j==(pozition-1) || j==(pozition+10) ||j==(pozition+20) )
               { 
               	printf("\n");
                                     
               }	
            }     
      }
      //контроль макс длины
      else
      { 
       	if (strlen(str)>40)
       	{
       		printf("many symbols");
       		exit(0);
       	}
      }
 
}