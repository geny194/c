#include <stdio.h>

#include <locale.h>
#include <stdlib.h>
#include <ctype.h>
int countbit(unsigned x);
void rightrot(unsigned x, int n);
void main()
{
  setlocale (LC_ALL,"Rus");
  unsigned int x;
  int n;
  printf("Введите номер\n");
  scanf("%d",&x);
  printf("n:");
  scanf("\n %d\n",&n);
  rightrot(x,n);
}

int countbit(unsigned x)
{
  int count;

  for(count=1;x>=2;count++)
  {
  	 x=x/2;
  }

}
void rightrot(unsigned x, int n)
{
  int itbit=(countbit(x)-1);
  while(n--)
  {
     int rightbit=x&1;
     x>>1;
    x=x|(rightbit<<itbit);
    printf("%d",x);
  }
  



}


