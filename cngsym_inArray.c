#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
// играюсь с float
#define SIZE 5
void showArray(float array[],int lenght);
 int main(void)
 {
int len;
size_t sum;

float prices[SIZE]={1000.0,2000.0,3000.0,4000.0,5000.0};
// для себя длинe смотрю

size_t floatSize=sizeof(float);
/////////////////////////////////////////////////

sum=sizeof(prices);
printf("%lu\r\n",sum);
printf("%zu\n",floatSize);
///////////////////////////////////////////////

printf("[*] index access\n");
printf("0:%.2f\n",prices[0]); 
printf("1:%.2f\n",prices[1]);
printf("2:%.2f\n",prices[2]);
printf("3:%.2f\n",prices[3]);
printf("4:%.2f\n",prices[4]);
//////////////////////////////////////////////////

printf("[*] pointer access\n");
printf("%.2f\n", *prices);
printf("%.2f\n",*(prices+1));
printf("%.2f\n",*(prices+2));
printf("%.2f\n",*(prices+3));
//////////////////////////////////////////////////////////////

len=SIZE+1;
showArray(prices,len);

 return 0;
}

/////////////Посмотрим как выделить память////////
void showArray(float array[],int lenght){
float lstvar=6000.00;
float *point;
point=(float*)malloc(sizeof(lenght));
 for(int i=0; i<lenght;i++)
 {  
 	point[i]=array[i];
 	printf("point[%i]=%.2f ",i,point[i]);
 	printf("\n");
 	if(point[i]=*(point+5))
 	{  
 	  point[i]=lstvar;
 	  {
       printf("point[%i]=%.2f ",i,point[i]);
 	  }
 	}
 	else
 	{
          printf("not equal\t"); 		
 	}	printf("\n");
 }
free(point);

}