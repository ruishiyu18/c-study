/* 编程题8：输出某一范围内的水仙花数 */

#include <stdio.h>

int main()
{
  int temp, sum, z;
  int m,n;
  scanf("%d%d", &m, &n);
  
  for (int i=m;i<=n;i++) {	/* 逐个数验证 */
	temp = i;					/* 使用变量temp来存储本次验证的数值，循环体内可变化；这样，保持i值不变 */
	sum = 0;
	for(int j=1;j<=3;j++){		/* 3位数循环计算 */
	  z = temp%10;
	  sum = sum + z*z*z;
	  temp = temp/10;
	}
	if (sum==i) printf("%d ", i); /* 判断 */
  }
  printf("\n");
  return 0;
}
