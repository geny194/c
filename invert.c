#include <stdio.h>

unsigned invert(unsigned int x,int p,int n);

void main()
{ unsigned int x;
  int p, n;
  printf("Enter the number:\nx:");
  scanf("%d",&x);
  printf("p:");
  scanf("%d",&p);
  printf("n:");
  scanf("%d",&n);
  printf("%d\n",invert(x,p,n));
}

unsigned invert(unsigned int x,int p,int n)
{
	return x ^(~(~0<<n)<<(p+1-n));
}