/* 编程题8：输出所有水仙花数 */

#include <stdio.h>

int main()
{
  int temp, sum, z;
  for (int i=100;i<1000;i++) {	/* 逐个数验证 */
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

