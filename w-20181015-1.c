#include <stdio.h>
#include <math.h>

int main()
{
  int a,t,m;
  scanf("%d",&a);
  t = sqrt(a);
  m=a;
  
  for(int i=2;i<t;i++)
	if(m%i==0) {
	  printf("%d ", i);
	  m=m/i;
	  i--;
	}
  
  printf("\n");
  return 0;
}
