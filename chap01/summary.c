/*
	求长方形的面积
*/

#include <stdio.h>

int main(void)
{
	int width;		/* 长方形的长 */
	int height;		/* 长方形的宽 */

	puts("求长方形的面积");

	printf("长：");
	scanf("%d", &width);

	printf("宽：");
	scanf("%d", &height);

	/* 显示 */
	printf("面积是%d。\a\n", width * height);

	return 0;
}
