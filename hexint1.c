#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void htoi(char *s);
int digit (char num);
/* Перевод из 16-ой системы в 10-ую*/
void main()
{ 
  char num[6];
  
  char num1[5];
  char *p;
  
  printf("Vvedite chislo:\n");
  scanf("%s",num);
  
  p=num;
  //======Массив для просмотра числа=========
  for(int i=2;i<=strlen(num);i++)
  {
     num1[i-2]=*(p+i);
     printf("%c",num1[i-2]);                 
  }
  printf("\n");
  
  htoi(num1);

}
//======Собственно функция перевода в целое=======
void htoi(char *s)
{ 
    
  char* p1;
  size_t n;
  int k;
  int sum=0;
  n=strlen(s);
  p1=s;
  
  for(int i=0;i<=strlen(s)-1;i++,n--)
  {
     if(*(p1+i)=='A'|| *(p1+i)=='B'||*(p1+i)=='C'||
     	*(p1+i)=='D'|| *(p1+i)=='E'||*(p1+i)=='F'||/*     Возможно некорректное условие,из-за множественности,но по другому не знаю*/
        *(p1+i)=='a'|| *(p1+i)=='b'||*(p1+i)=='c'||
     	*(p1+i)=='d'|| *(p1+i)=='e'||*(p1+i)=='f')
     {
         k=digit(*(p1+i))*pow(16,n-1);
         sum=sum+k;   
     }
     else
     {
        k=atoi(s)*pow(16,n-1);
       sum=sum+k;       
     }	
        
  }

   printf("%d",sum);

}
//======Функция для возврата целого ,если в введенном числе символ============
int digit (char num)
{
	switch(num)
	{
		case 'A':return 10;
		case 'B':return 11;
		case 'C':return 12;
		case 'D':return 13;
		case 'E':return 14;
		case 'F':return 15;
        case 'a':return 10;
		case 'b':return 11;
		case 'c':return 12;
		case 'd':return 13;
		case 'e':return 14;
		case 'f':return 15;
	}
}
