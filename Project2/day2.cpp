//�ڶ���


//#include <stdio.h>
//#define PI 3.14
//
//float dif_squreandcircle(int);
//
//int main(void)
//{
//	int n = 0;
//
//	printf("������һ�����������ǽ��������Ϊֱ���������κ�Բ�������\n");
//	while (scanf_s("%d", &n) && n > 1 && n < 1000)
//	{
//		printf("�����Ϊ%.2f", dif_squreandcircle(n));
//		printf("������һ�����������ǽ��������Ϊֱ���������κ�Բ��������q�˳�����\n");
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


//��һ��

//#include <limits.h>
//#include <stdio.h>
//#include <math.h>
//
//int max(int, int);
//
//int main(void)
//{
//	int a, b, c;
//	printf("�������������֣��������ֵķ�Χ��%d < a, b, c < %d\n", INT_MIN, INT_MAX);
//	while (scanf_s("%d%d%d", &a, &b, &c))
//	{
//		int result1 = max(a, b);
//		int result2 = max(result1, c);
//		printf("��������%d���\n", result1);
//		printf("�������������֣��������ֵķ�Χ��%d < a, b, c < %d����q�˳�����\n", INT_MIN, INT_MAX);
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



//������


#include <stdio.h>

int main(void)
{
	double m, high, distance;
	int n;

	printf("�����뵯��ĳ�ʼ�߶�M�ͻص�����N(0<M<2000, 0<N<50)\n");
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
		printf("�����N�λص���ĸ߶�Ϊ%0.2lf���ﵽ�ø߶Ⱥ��������ľ���Ϊ%0.2lf\n", high, distance);
		printf("�����뵯��ĳ�ʼ�߶�M�ͻص�����N(0<M<2000, 0<N<50)����q�˳�����\n");
	}
}



















