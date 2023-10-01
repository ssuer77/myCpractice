#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int line = 0;
//	printf("加入比特\n");
//
//	while (line < 20000)
//	{
//		printf("写代码:%d\n", line);
//		line++;
//
//	}
//
//	if (line >= 20000)
//	{
//		printf("offer\n");
//	}
//	else
//	{
//		printf("goon\n");
//	}
//	return 0;
//}
int APP(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;

}



int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	int c = APP(a,b);
	printf("a+b=%d\n", c);









	return 0;
}