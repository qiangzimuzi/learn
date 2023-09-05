//第二题


//#include <stdio.h>
//#define PI 3.14
//
//float dif_squreandcircle(int);
//
//int main(void)
//{
//	int n = 0;
//
//	printf("请输入一个整数，我们将求出以其为直径的正方形和圆的面积差\n");
//	while (scanf_s("%d", &n) && n > 1 && n < 1000)
//	{
//		printf("面积差为%.2f", dif_squreandcircle(n));
//		printf("请输入一个整数，我们将求出以其为直径的正方形和圆的面积差，按q退出程序\n");
//	}
//	return 0;
//}
//
//float dif_squreandcircle(int n)
//{
//	int area_of_squre = n * n;
//	float area_of_circle = (PI * ((float)n * (float)n)) / 4;
//	return (float)area_of_squre - area_of_circle;
//}


//第一题

//#include <limits.h>
//#include <stdio.h>
//#include <math.h>
//
//int max(int, int);
//
//int main(void)
//{
//	int a, b, c;
//	printf("请输入三个数字，三个数字的范围在%d < a, b, c < %d\n", INT_MIN, INT_MAX);
//	while (scanf_s("%d%d%d", &a, &b, &c))
//	{
//		int result1 = max(a, b);
//		int result2 = max(result1, c);
//		printf("三个数中%d最大\n", result1);
//		printf("请输入三个数字，三个数字的范围在%d < a, b, c < %d，按q退出程序\n", INT_MIN, INT_MAX);
//	}
//	return 0;
//}
//
//int max(int a, int b)
//{
//	if (a > b)
//		return a;
//	else
//		return b;
//}



//第四题


#include <stdio.h>

int main(void)
{
	double m, high, distance;
	int n;

	printf("请输入弹球的初始高度M和回弹次数N(0<M<2000, 0<N<50)\n");
	while (scanf_s("%lf%d", &m, &n))
	{
		double count = 1;
		distance = m;
		for (int i = 0; i < n; i++)
		{
			count *= 2;
			distance += m / count;
		}
		high = m / count;
		printf("弹球第N次回弹后的高度为%0.2lf，达到该高度后所经过的距离为%0.2lf\n", high, distance);
		printf("请输入弹球的初始高度M和回弹次数N(0<M<2000, 0<N<50)，按q退出程序\n");
	}
}



















