#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int i = 0;
	int n = 0;
	int a = 0;
	int sum = 0;
	int tmp = 0;
	printf("������Ҫ��ǰn��a�ĺ��е�a��n��");
	scanf("%d %d",&a, &n);
	for (i = 1; i <= n; i++)
	{
		/*int sum = 0;//����������������棬����ÿ��ѭ�����0��
		int tmp = 0;*/
		tmp = tmp * 10 + a;//
		sum += tmp;
	}
	printf("%d\n",sum);
	system("pause");
	return 0;
}