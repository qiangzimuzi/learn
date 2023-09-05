//第一题
// 
// 
//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//
//	printf("请输入一个三位数\n");
//	while (scanf_s("%d", &num))
//	{
//		int hundreds = num / 100;
//		int tens = (num / 10) % 10;
//		int ones = num % 10;
//
//		printf("%d\n", hundreds);
//		printf("%d\n", tens);
//		printf("%d\n", ones);
//		printf("请输入一个三位数，退出请按q\n");
//	}
//	return 0;
//}
//
// 
// 第二题
// 
// 
//#include <stdio.h>
//#define low 6
//#define middle 2
//#define high 1
//
//int main(void)
//{
//	int num;
//
//	printf("请输入做对题目数量，系统将会自动打分\n");
//	while (scanf_s("%d", &num) && num <= 40)
//	{
//		if (num <= 10)
//			printf("该为同学成绩为%d\n", num * low);
//		else if (num >= 11 && num <= 20)
//			printf("该为同学成绩为%d\n", num * middle);
//		else
//			printf("该为同学的成绩为%d\n", num * high);
//		printf("请输入做对题目数量，系统将会自动打分，退出请按q\n");
//	}
//	return 0;
//}



//第三题



#include <stdio.h>
int num(int);

int main(void)
{
	int n;

	printf("想知道第几月兔子的数量，请输入2-30间任意数字\n");
	while (scanf_s("%d", &n) && n > 2 && n < 30)
	{
		int a = num(n);
		printf("第%d月兔子数量为%d\n", n, a);
		printf("请输入2-30间任意数字，按q退出\n");
	}
	return 0;
}

int num(int n)
{
	if (n > 2)
		return num(n -1) + num(n - 2);
	else
		return 1;
}