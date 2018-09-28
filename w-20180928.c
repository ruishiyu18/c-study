#include <stdio.h>
int main()
{
  long n=0;
  int i=1, num[12], m=0, temp=0;
  
  scanf("%ld\n", &n);
  temp = n;
  while (temp != 0){
	num[i]=temp%10; i++;
	temp=temp/10;
	m=m+1;
  }

  printf("%d\n",m);

  for(i=0;i<m;i++){
	printf("%d ",num[m-i]);
  }
  printf("\n");
  
  for(i=1;i<=m;i++){
	printf("%d ",num[i]);
  }
  printf("\n");

  return 0;
}
