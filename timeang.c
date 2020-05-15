#include <stdio.h>
#include <stdlib.h>
/*По углу отклонения опредлим время*/
void main(int argc ,char **argv)
{
   if (argc==1)
   {
  	printf("Угол %s смещение относительно 12 часов отсутствует",argv[0]);
  	exit(0);
   }
   int angle =atoi(argv[1]) %360;
   if (angle<0){
   angle+=360;
   }
 
   int minut=angle*2;
   int hours=minut/60;

   printf("Hours: %d\nMinutes: %d\n",hours,minut);

}