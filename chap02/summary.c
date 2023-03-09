/*
	第2章总结
*/

#include <stdio.h>

int main(void)
{
	int a;
	int b;
	double r;	/* 半径 */

	printf("整数a和b的值");
	scanf("%d%d", &a, &b);

	printf("a + b = %d\n", a + b);	/* 加法运算：双目+运算符 */
	printf("a - b = %d\n", a - b);	/* 减法运算：双目-运算符 */
	printf("a * b = %d\n", a * b);	/* 乘法运算：双目*运算符 */
	printf("a / b = %d\n", a / b);	/* 商：/ 运算符 */
	printf("a %% b = %d\n", a % b);	/* 余数：% 运算符 */

	printf("(a+b)/2 = %d\n",   (a + b) / 2);
	printf("平均值 = %f\n\n", (double)(a + b) / 2);

	printf("半径");
	scanf("%lf", &r);

	printf("半径为%.3f的圆的面积是%.3f。\n", r, 3.14 * r * r);

	return 0;
}
