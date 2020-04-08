#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
//фибоначчи
int fibonacchi(int n);
void main(void)
{ int n;
  
  printf("Vvedite chislo dlya  posledovatelnosti\n");
  scanf("%d",&n);
 
  printf("Posledovatelnost dlya %d ravna %i\n",n,fibonacchi(n));
  return;
}
int fibonacchi(int n)
{ 
  if (n == 0 || n == 1) {
    return 1;
  } else {
    return fibonacchi(n-1) + fibonacchi(n-2);
} 
}    
    