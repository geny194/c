#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROWS 3
#define COLS 3

void trancp(float ar[][COLS]);
void dsparr(float arr[][COLS]);
void main()
{
  srand(time(NULL));	
  float mas[ROWS][COLS]={0};
  for (int i=0;i<=2;i++)
  {
    for(int j=0;j<=2;j++)
    {
    	mas[i][j]=rand()%10;
    }	 
  }
  dsparr(mas);

  trancp(mas);
}


void trancp(float arr[][COLS])
{ 
    float (*parr)[COLS]=arr;
    float trnp[3];
   
   for (int i=0;i<=2;i++)
   {
  	 for(int j=0;j<=2;j++)
     {
       if(j!=i && i!=2 && j!=0)
       {	
         trnp[i]=*(*(parr+i)+j);
         *(*(parr+i)+j)=*(*(parr+j)+i);
         *(*(parr+j)+i)=trnp[i];
       } 

     }
    } 

 dsparr(arr);

}
void dsparr(float arr[][COLS])
{
	 printf("Our array :\n");
	for (int i=0;i<=ROWS-1;i++)
   {

      for(int j=0;j<=COLS-1;j++)
      {
    	printf("%.2f\t",arr[i][j]);
      }
    printf("\n");	 
   }
}