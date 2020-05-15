#include <stdio.h>

int bit(unsigned x);

void main()
{

 printf("%d\n",bit(100));


}


int bit(unsigned x)
{ int i;
  for (i=0;x!=0;x=(x-1))
  {
       i++;


  }
return i;

}