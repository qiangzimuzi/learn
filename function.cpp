//��һ��
// 
// 
//#include <stdio.h>
//
//int main(void)
//{
//	int num;
//
//	printf("������һ����λ��\n");
//	while (scanf_s("%d", &num))
//	{
//		int hundreds = num / 100;
//		int tens = (num / 10) % 10;
//		int ones = num % 10;
//
//		printf("%d\n", hundreds);
//		printf("%d\n", tens);
//		printf("%d\n", ones);
//		printf("������һ����λ�����˳��밴q\n");
//	}
//	return 0;
//}
//
// 
// �ڶ���
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
//	printf("������������Ŀ������ϵͳ�����Զ����\n");
//	while (scanf_s("%d", &num) && num <= 40)
//	{
//		if (num <= 10)
//			printf("��Ϊͬѧ�ɼ�Ϊ%d\n", num * low);
//		else if (num >= 11 && num <= 20)
//			printf("��Ϊͬѧ�ɼ�Ϊ%d\n", num * middle);
//		else
//			printf("��Ϊͬѧ�ĳɼ�Ϊ%d\n", num * high);
//		printf("������������Ŀ������ϵͳ�����Զ���֣��˳��밴q\n");
//	}
//	return 0;
//}



//������



#include <stdio.h>
int num(int);

int main(void)
{
	int n;

	printf("��֪���ڼ������ӵ�������������2-30����������\n");
	while (scanf_s("%d", &n) && n > 2 && n < 30)
	{
		int a = num(n);
		printf("��%d����������Ϊ%d\n", n, a);
		printf("������2-30���������֣���q�˳�\n");
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