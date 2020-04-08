#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// задание подкорректировал под СИ,так как в примере задача была для питона
void main (void) 
{
  char mas[3][4]={"AAg","AAr","Ban"};
  char sum;
  size_t sum2;
  sum2=sizeof(mas);
  char *p;
  char ch='A';
  short int count=0;
 
 printf("%lu\r\n",sum2);
  for (int i=0;i<=2;i++){

    for(int j=0;j<=3;j++){

       printf("%c\r\n",mas[i][j]);
    }
  }
    	//a) если есть символ 'A' в строке массива вывести адрес
        p=mas[0];
    for (int i=0;i<=2;i++){
    	for(int j=0; j<=3;j++){
         if(mas[i][j] ==ch){
         printf("Adress is %i\r\n",*p);
         }
        
        p++; 

        printf("\r\n");
        //б)вывести количество повторений символа 'A'
         if(mas[i][j]==mas[i][j-1]){
         count++; 
         printf("count is %i",count);
         } 
        }
     } 

return ;
}
