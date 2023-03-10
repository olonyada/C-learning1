/*
	字符串和字符串数组
*/

#include <ctype.h>
#include <stdio.h>

/*--- 用""将字符串s括起来显示并换行 ---*/
#define put_str_ln(s)  (put_str(s), putchar('\n'))

/*--- 用""将字符串s括起来显示 ---*/
void put_str(const char *s)
{
	putchar('\"');
	while (*s)
		putchar(*s++);
	putchar('\"');
}

/*--- 将字符串转换为大写并复制 ---*/
char *str_cpy_toupper(char *d, const char *s)
{
	char *tmp = d;

	while (*d++ = toupper(*s++))
		;

	return tmp;
}

int main(void)
{
	int i;
	char s[128], t[128];	/* 用数组实现的字符串 */
	char a[] = "CIA";		/* 用数组实现的字符串 */
	char *p  = "FBI";		/* 用指针实现的字符串 */
	char a2[][5] = {"LISP", "C", "Ada"};	/* 用数组实现的字符串的数组 */
	char *p2[]   = {"PAUL", "X", "MAC"};	/* 用指针实现的字符串的数组 */

	printf("字符串s = ");   scanf("%s", s);
	printf("转换为大写并复制到了数组t。\n");
	printf("字符串t = %s\n", str_cpy_toupper(t, s));

	printf("a = ");   put_str_ln(a);
	printf("p = ");   put_str_ln(p);

	for (i = 0; i < sizeof(a2) / sizeof(a2[0]); i++) {
		printf("a2[%d] = ", i);   put_str_ln(a2[i]);
	}

	for (i = 0; i < sizeof(p2) / sizeof(p2[0]); i++) {
		printf("p2[%d] = ", i);   put_str_ln(p2[i]);
	}
}
