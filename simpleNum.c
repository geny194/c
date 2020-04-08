//простые числа
 #include <stdio.h>
 #include <stdlib.h>
 #include <string.h>
 void checkNumber(int n);
 void main (void) 
 {
   int chislo;
   printf("Vvedite chislo:\n");
   scanf("%i",&chislo);
  checkNumber(chislo);
   
 return ;
 }

 void checkNumber(int n){

int d= 1;
int c= 2;
    if((n%d==0) && (n%c)!=0)
    {
    printf("Chislo %i veroyatno prostoe\n",n); 
    }
    else{
    	  printf("Chislo %i veroyatno sostavnoe\n",n); 
    }

 }