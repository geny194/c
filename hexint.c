#include <stdio.h>
#include <stdlib.h>
/* Перевод из одной системы счсления в другую*/
char digit(int num);
int dectox_int(int a,int p, char *s);
void main()
{
  int a;
  char s[80]={0};
  int p;
  //======Вводим число=======
  printf("Vvedite chislo:\n");
  scanf("%d",&a);
  //====Вводим основание=====
  printf("Vvedite osnova");
  scanf("%d",&p);
  //======Целое число========
  int k=dectox_int((int)a,p,s);
  printf("%s",s);
}
/* Возвращаем 16-ый символ*/
//===========================
char digit (int num)
{
	switch(num)
	{
		case 0:return '0';
		case 1:return '1';
		case 2:return '2';
		case 3:return '3';
		case 4:return '4';
		case 5:return '5';
		case 6:return '6';
		case 7:return '7';
		case 8:return '8';
		case 9:return '9';
		case 10:return 'A';
		case 11:return 'B';
		case 12:return 'C';
		case 13:return 'D';
		case 14:return 'E';
		case 15:return 'F';

	}
}
/*Возвращаем целую часть*/
//==================================
int dectox_int(int a,int p, char *s)
{
  int num = (int) a;
  int rest = num %p;
  num /=p;
  if(num == 0)
  {
    s[0] = digit(rest);return 1;

  }
int k = dectox_int(num,p,s);
s[k++] = digit(rest);
return k;  
}

