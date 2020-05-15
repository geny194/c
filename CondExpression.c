#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <ctype.h>

#define n  10
void lower(char *str);
char *trimwhithspace(char *str);//уберем пробелы
void main()
{
 char arr[20];
 int a[10];
 setlocale(LC_ALL,"Rus");//можно печатать по-русски

	printf("Введите строку :\n");
	fgets(arr,sizeof(arr),stdin);

  // for (int i=0;i<=n-1;i++)
  // {
  //   printf("%6d %c",a[i],(i%10 ==9 || i==n-1)?'\n':' ');

  // }

 lower(trimwhithspace(arr));
}

void lower(char *str)
{ 
	char *p;

	p=str;
for(int i=0;i<=strlen(str);i++)
{
   printf("%c %d",(*(p+i)>='a' && *(p+i)<='z')? toupper(*(p+i)) :' ',(*(p+i)>='a' && *(p+i)<='z')? toupper(*(p+i)) :' ');
  
}






}
char *trimwhithspace(char *str)
{
  char *end;
  //пока не 1 строка 
  while(isspace((unsigned char)*str)) str++;
  //вернем 0
  if (*str == 0) return str;
 //уберем пробелы
  end= str+strlen(str)-1;
  while(end>str && isspace((unsigned char)*end)) end--;

end[1] = '\0';
return str;
}