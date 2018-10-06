/* cosx的近似计算公式 */

#include <stdio.h>
#include <math.h>

int main()
{
  double x, sum=1;
  int n, sign;

  double temp1;
  long temp2;
  
  scanf("%lf%d",&x,&n);			/* double类型必须使用%lf; float类型可以使用%f */
  
  for (int i=1;i<=n;i++) {	/* 逐项计算，含n项 */
	if (i%2 ==0) sign=1; else sign=-1; /* 首先，确定该项的符号 */
	temp1 = pow(x,2*i);				   /* 其次，求出分子 */
	temp2 = 1;
	for(int j=2; j<=2*i; j++) temp2 = temp2*j; /* 再次，求出分母 */
	sum = sum + sign*temp1/temp2;
  }
  printf("%.8lf\n", sum);		/* 指定精度 */
  return 0;
}

