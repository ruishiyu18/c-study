/* 编程题4：求m,n之间的所有素数 */

#include <stdio.h>

int main()
{
  int m, n;
  int temp, next;
  
  scanf("%d%d", &m, &n);
  
  for (int i=m;i<=n;i++) {		/* 逐个数来判断是否素数 */
	temp = i;					/* 专用用一个变量来存储本次循环的数，以免循环体内赋值后，改变了i值 */
	next = 0;
	for(int j=2; j<temp; j++)
	  if ( (temp%j)==0 ) {next = 1; break;}	/* 当余数为0时，非素数；使用变量next来标识：为1时，说明该数为非素数，应继续判断下一个数。 */
	if (next == 0 ) printf("%d ", i);		/* 说明任何一个数除都无余数，是素数 */
  }
  printf("\n");
  return 0;
}
