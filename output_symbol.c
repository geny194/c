#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main (void) 
{char sum;
 size_t sum2;
 char array[10]="Hi pepl";
// для себя посмотрел длину строки
sum=strlen(array);
  sum2=sizeof(array);
  printf("%i\r\n",sum);
  printf("%lu\r\n",sum2);
// вывели строку в обратном порядке
  for (int i=sum2;i>=0;i--)
  {
   printf("Our array is %c\r\n",array[i]);
  }	

return ;
}


