#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	printf("������Ҫ���ҵķ�Χ��\n");
	scanf("%d %d", &a, &b);
	for (i = a; i <= b; i++)
	{
		int count = 0;//�����ֵĳ���
		int tmp = i;
		while (tmp)
		{
			tmp /= 10;
			count++;
		}
		/*printf("%d", count);*/
		
		int sum = 0;
		int n = i;//i����,i��ѭ���б仯,����ת��һ��
		
		while (n)
		{
			//if (i >= 10)
			//{
			//	i /= 10;
			//	
		 //   }

			//else if (i >= 0 && i < 10)
			//{
			//	i %= 10;
			//	count--;
			//	/*sum += pow(i,count);*/
			//	
			//	/*break;*/
			//}
			int num = n % 10;//ÿλ�ϵ�����
			sum += pow(num, count);
			n /= 10;
		}
		if (i==sum)
		printf("%d\n",i);
		/*break;*/
	}



	system("pause");
	return 0;
}