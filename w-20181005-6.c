/* 编程题6：输入整数n, 计算公式1+1/1!+1/2!+1/3!+...+1/n!的值 */

#include <stdio.h>

int main()
{
  int n;
  double sum=1;
  long kj=1;
  
  scanf("%d",&n);
    
  for (int i=1;i<=n;i++) {	/* 逐项计算，先计算1/1!, 1/2!, 1/3!, ... */
	kj = 1;
	for(int k=1;k<=i;k++) kj = kj*k; /* 计算i! */
	sum =sum + (double)1/kj;				 /* 加上本次循环计算的项，注意使用强制类型转换，否则结果不对 */
  }
  printf("%lf\n", sum);
  return 0;
}
