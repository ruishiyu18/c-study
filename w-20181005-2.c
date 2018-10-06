/* 编程题：从控制台输入整数n(n>=1), 计算并输出从1到n之间（包括n）个位为1的所有素数；若没有符合要求的素数，则输出-1。 */

#include <stdio.h>

int main()
{
  int n, yes;

  scanf("%d",&n);
  if (n<11)						/* 需要输出的素数肯定都大于10 */
	{printf("%d", -1); return 0;}

  for (int i=11;i<=n;i++) {	/* 从11开始，逐个验证 */
	if ((i%10)!=1) continue;
	yes = 1;
	for(int j=2;j<i;j++) if (i%j == 0) { yes = 0; break;}
	if (yes == 1) printf("%d ", i);
  }
  printf("\n");
  return 0;
}
