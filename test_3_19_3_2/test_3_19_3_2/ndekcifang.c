#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>

int f(int n, int k)
{
	if (k == 0)
		return 1;
	else if (k > 0)
	{
		for (int i = 1; i < k + 1; i++)
			return n*f(n, k - 1);
	}
	else
		return 1.0/f(n,(-k));//�����1/int�õ�double������
}

int main()
{
	int n = 0;
	int k = 0;
	int ret = 0;
	printf("������n��k\n");
	scanf("%d %d", &n, &k);
	ret = f(n, k);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

